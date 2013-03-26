/*
 * File:   NetworkGameArea.cpp
 * Author: antoine
 *
 * Created on 10 mars 2013, 16:01
 */
#include <iostream>;
#include "NetworkGameArea.h"
#include "ToolBox.h"
#include <iostream>
#include <QPainter>
#include <qt4/QtCore/qnamespace.h>
#include <sstream>
#include <qt4/QtCore/qdebug.h>
using namespace std;

NetworkGameArea::NetworkGameArea() {
    widget.setupUi(this);
    setAcceptDrops(true);
    firstConnect = true;
    portConnecterChoice1 = new PortConnecterChoice();
    portConnecterChoice2 = new PortConnecterChoice();

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
        newIcon->setFixedSize(50, 50);
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

void NetworkGameArea::mouseReleaseEvent(QMouseEvent* event) {

    if (event->button() == Qt::LeftButton) {
        pointDrawline2 = event->pos();

        std::cout << pointDrawline1.x() << endl;
        std::cout << pointDrawline1.y() << endl;

        std::cout << pointDrawline2.x() << endl;
        std::cout << pointDrawline2.y() << endl;

    }
}

void NetworkGameArea::paintEvent(QPaintEvent *paintEvent) {
    paint.begin(this);
    paint.setPen(Qt::black);
    paint.drawLine(pointDrawline1, pointDrawline2);

    paint.end();

    update();

}

void NetworkGameArea::mousePressEvent(QMouseEvent *event) {

    if (event->button() == Qt::LeftButton) {

        QLabel *child = dynamic_cast<QLabel*> (childAt(event->pos()));
        pointDrawline1 = event->pos();

        if (!child) {
            return;
        }

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



    QMenu menu(this);
    QLabel *child = dynamic_cast<QLabel*> (childAt(event->pos()));
    if (!child)
        return;
    //std::cout << "ce label est : " << child->objectName().toStdString() << endl;


    connectAct = new QAction(tr("&Connect"), this);
    connectAct->setStatusTip(tr("Connecter un périphérique à un autre"));
    if (firstConnect == true) {
        labelConnecter1 = child;
    } else {
        labelConnecter2 = child;
    }
    //std::cout<<"le label est desormais : "<<labelMenuConnecter->objectName().toStdString();
    connect(connectAct, SIGNAL(triggered()), this, SLOT(connectStocker()));

    deleteAct = new QAction(tr("&Delete"), this);
    deleteAct->setStatusTip(tr("Delete le périphérique séléctionné"));
    connect(deleteAct, SIGNAL(triggered()), this, SLOT(deleteItem()));

    disconnectAct = new QAction(tr("&Disconnect"), this);
    disconnectAct->setStatusTip(tr("Deconnecter les deux péripherique sélectionner"));
    if (firstDisconnect == true) {
        labelDisconnecter1 = child;
    } else {
        labelDisconnecter2 = child;
    }
    connect(disconnectAct, SIGNAL(triggered()), this, SLOT(disconnectStocker()));

    menu.addAction(connectAct);
    menu.addAction(deleteAct);
    menu.addAction(disconnectAct);
    menu.exec(event->globalPos());
}

/**
 * relier deux item entre eux
 * @param labelSource : label qui a été cliqué en premier
 */


void NetworkGameArea::connectStocker() {


    /*
     
     * LE CODE DOIT FAIRE L'OBJET DE VERIFICATION : 
     * EST CE QUE JE CONNECT BIEN DEUX ITEM ET PAS DEUX COMPOSANT DE MA 
     * FENETRE ?
     */
    if (firstConnect) {
        portConnecterChoice1->exec();
        firstConnect = false;
    } else {
        firstConnect = true;
        portConnecterChoice2->exec();
        descriptor();
    }

}

void NetworkGameArea::disconnectStocker() {
    /*
     
     LE CODE DOIT FAIRE L'OBJET D'UNE VÉRIFICATION : 
     * EST IL DECONNECTER POUR POUVOIR ETRE DECONNECTER ?
     * EST CE QUE JE DECONNECT BIEN DEUX ITEM ET PAS DEUX COMPOSANT DE MA 
     * FENETRE ?
     
     */
    if (firstDisconnect) {
        firstDisconnect = false;
    } else {
        firstDisconnect = true;
        std::cout << labelDisconnecter1->objectName().toStdString() <<
                "est déconnecté de " <<
                labelDisconnecter2->objectName().toStdString()
                << endl;
    }
}

void NetworkGameArea::deleteItem() {
    /*
     LE CODE DOIT FAIRE L'OBJET D'UNE VERIFICATION : EST BIEN UN ITEM QUE JE 
     * FERME, ON UN COMPOSANT DE MA FENETRE ?
     
     */
    labelConnecter1->close();
}
// void NetworkGameArea::paintEvent(QPaintEvent *) {
//     QPainter p;
//     p.begin(this);
//     p.drawLine(200,200,400,400);
//     //child1->pos(), child2->pos()
//     p.end();
// }

void NetworkGameArea::descriptor() {
    if (labelConnecter1 != NULL && labelConnecter2 != NULL) {
        std::cout << labelConnecter1->objectName().toStdString() <<
                "est connecté sur le port sue l'interface numéro " <<
                portConnecterChoice1->portSelected << " à " <<
                labelConnecter2->objectName().toStdString() <<
                " sur l'interface numéro " <<
                portConnecterChoice2->portSelected << "\n\n";
    }
}

void NetworkGameArea::changeValuePort() {
    //this->port1 = value;
    std::cout << "///////////done/////////////";
}
