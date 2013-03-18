/*
 * File:   NetworkGameArea.cpp
 * Author: antoine
 *
 * Created on 10 mars 2013, 16:01
 */
#include <iostream>;
#include "NetworkGameArea.h"
#include <iostream>
#include <QPainter>
using namespace std;

NetworkGameArea::NetworkGameArea() {
    widget.setupUi(this);
    setAcceptDrops(true);
    firstConnect = true;
}

NetworkGameArea::~NetworkGameArea() {
}

/**
 * permet de droper l'objet que l'on tient dans la JFrame
 * @param event
 */

void NetworkGameArea::dragEnterEvent(QDragEnterEvent *event) {
    if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
        if (event->source() == this) {
            event->setDropAction(Qt::MoveAction);
            event->accept();
        } else {
            event->acceptProposedAction();
        }
    } else {
        event->ignore();
    }
}

/*void NetworkGameArea::dragMoveEvent(QDragMoveEvent *event) {
    if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
        if (event->source() == this) {
            event->setDropAction(Qt::MoveAction);
            event->accept();
        } else {
            event->acceptProposedAction();
        }
    } else {
        event->ignore();
    }
}*/

void NetworkGameArea::dropEvent(QDropEvent *event) {

    /**
     * fait glisser l'objet que l'on tiens dans la Frame
     * @param event
     */
    if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
        QByteArray itemData = event->mimeData()->data("application/x-dnditemdata");
        QDataStream dataStream(&itemData, QIODevice::ReadOnly);

        QPixmap pixmap;
        QString name;

        QPoint offset;
        dataStream >> pixmap >> offset;
        dataStream >> name;

        QLabel *newIcon = new QLabel(this);

        newIcon->setPixmap(pixmap);
        newIcon->setScaledContents(true);
        newIcon->move(event->pos() - offset);
        newIcon->setFixedSize(50,50);
        newIcon->setObjectName(name);
        std::cout << "le nom de l'objet : " << newIcon->objectName().toStdString() << endl;
        newIcon->show();


        newIcon->setAttribute(Qt::WA_DeleteOnClose);

        if (event->source() == this) {
            event->setDropAction(Qt::MoveAction);
            event->accept();
        } else {
            event->acceptProposedAction();
        }
    } else {
        event->ignore();
    }
}

void NetworkGameArea::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {

        QLabel *child = static_cast<QLabel*> (childAt(event->pos()));
        if (!child)
            return;

        QPixmap pixmap = *child->pixmap();
        QString name = child->objectName();

        QByteArray itemData;
        QDataStream dataStream(&itemData, QIODevice::WriteOnly);
        dataStream << pixmap << QPoint(event->pos() - child->pos());
        dataStream << name << QPoint(event->pos() - child->pos());

        QMimeData *mimeData = new QMimeData;
        mimeData->setData("application/x-dnditemdata", itemData);

        QDrag *drag = new QDrag(this);
        drag->setMimeData(mimeData);
        drag->setPixmap(pixmap);
        drag->setHotSpot(event->pos() - child->pos());

        QPixmap tempPixmap = pixmap;
        QPainter painter;
        painter.begin(&tempPixmap);
        painter.fillRect(pixmap.rect(), QColor(127, 127, 127, 127));
        painter.end();

        child->setPixmap(tempPixmap);

        if (drag->exec(Qt::CopyAction | Qt::MoveAction, Qt::CopyAction) == Qt::MoveAction)
            child->close();
        else {
            child->show();
            child->setPixmap(pixmap);
        }
    }
}

void NetworkGameArea::contextMenuEvent(QContextMenuEvent * event) {

    if (firstConnect == true) {
        QMenu menu(this);
        QLabel *child = static_cast<QLabel*> (childAt(event->pos()));

        //std::cout << "ce label est : " << child->objectName().toStdString() << endl;


        connectAct = new QAction(tr("&Conect"), this);
        //newAct->setShortcuts(QKeySequence::New);
        connectAct->setStatusTip(tr("Connecter un périphérique à un autre"));
        labelConnecter1 = child;
        //std::cout<<"le label est desormais : "<<labelMenuConnecter->objectName().toStdString();
        connect(connectAct, SIGNAL(triggered()), this, SLOT(stocker()));
        menu.addAction(connectAct);
        menu.exec(event->globalPos());
    } else {
        QMenu menu(this);
        QLabel *child = static_cast<QLabel*> (childAt(event->pos()));

        //std::cout << "ce label est : " << child->objectName().toStdString() << endl;


        connectAct = new QAction(tr("&Conect"), this);
        //newAct->setShortcuts(QKeySequence::New);
        connectAct->setStatusTip(tr("Connecter un périphérique à un autre"));
        labelConnecter2 = child;
        //std::cout<<"le label est desormais : "<<labelMenuConnecter->objectName().toStdString();
        connect(connectAct, SIGNAL(triggered()), this, SLOT(stocker()));
        menu.addAction(connectAct);
        menu.exec(event->globalPos());
    }


}

/**
 * relier deux item entre eux
 * @param labelSource : label qui a été cliqué en premier
 */
void NetworkGameArea::linker(QLabel &labelSource) {

}

void NetworkGameArea::stocker() {
    if (firstConnect) {
        firstConnect = false;
    } else {
        firstConnect = true;
        std::cout << labelConnecter1->objectName().toStdString() << 
                "est connecté à " << labelConnecter2->objectName().toStdString()
                << endl;
    }
    //std::cout << labelConnecter1 << "est connecté à " << labelConnecter2 << endl;
}
// void NetworkGameArea::paintEvent(QPaintEvent *) {
//     QPainter p;
//     p.begin(this);
//     p.drawLine(200,200,400,400);
//     //child1->pos(), child2->pos()
//     p.end();
// }