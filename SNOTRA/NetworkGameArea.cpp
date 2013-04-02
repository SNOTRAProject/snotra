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
#include <qt4/QtCore/qnamespace.h>
#include <sstream>
#include <qt4/QtCore/qdebug.h>
#include <qt4/QtCore/qglobal.h>
#include "DataBaseManager.h"
//#include "Sauvegarder.h"
//#include "Charger.h"
using namespace std;

NetworkGameArea::NetworkGameArea() {
    pushButton = false;
    widget.setupUi(this);
    setAcceptDrops(true);
    firstConnect = true;
    portConnecterChoice = new PortConnecterChoice();


    //A SUPRIMER////////////////////////////////////////////
    db = new DataBaseManager();
    //    db->showTable();
    //    qDebug() << "OK";
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

void NetworkGameArea::dragMoveEvent(QDragMoveEvent* event) {
    if (!pointDrawline1.isNull()) {
        pointDrawline2 = event->pos();
        update();
    }
}

void NetworkGameArea::paintEvent(QPaintEvent*) {
    if (!pointDrawline1.isNull() && !pointDrawline2.isNull()) {
        QPainter painter;
        painter.begin(this);
        painter.setPen(Qt::black);
        QLine line(pointDrawline1, pointDrawline2);
        painter.drawLine(line);
        painter.end();
        update();
    }
}

void NetworkGameArea::dropEvent(QDropEvent *event) {

    /**
     * fait glisser l'objet que l'on tiens dans la Frame
     * @param event
     */
    if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
        QByteArray itemData = event->mimeData()->data(
                "application/x-dnditemdata");
        QDataStream dataStream(&itemData, QIODevice::ReadOnly);

        QPixmap pixmap;
        QString name;

        QPoint offset;
        dataStream >> pixmap >> offset;
        dataStream >> name;

        if (!name.isEmpty()) {
            QLabel *newIcon = new QLabel(this);

            newIcon->setPixmap(pixmap);
            newIcon->setScaledContents(true);
            newIcon->move(event->pos() - offset);
            newIcon->setFixedSize(50, 50);
            newIcon->setObjectName(name);
            std::cout << "le nom de l'objet : " <<
                    newIcon->objectName().toStdString() << endl;
            newIcon->show();
            ///////////////////////////////////////////////////////////////
            //             MISE EN PLACE DE LA LISTE DE SAUVEGARDE       //
            ///////////////////////////////////////////////////////////////            
            qLabelListSave.append(newIcon);
            //BIEN FAIRE LA REQUETE POUR QU'ELLE CORRESPONDE À L'OBJET TEST
            //            DataBaseManager *db = new DataBaseManager();
            //            db->create(test);

            ////////////////////////////////////////////////////////////////       
        } else if (childAt(event->pos()) != NULL) {

            QLabel *child = dynamic_cast<QLabel*> (childAt(event->pos()));
            labelConnecter2 = child;
            portConnecterChoice->setText(labelConnecter1->objectName(),
                    labelConnecter2->objectName());
            // Mode fil
            qDebug("Création d'un fil");

            portConnecterChoice->exec();

            descriptor();

            // Popup des interfaces
            // Dire au modèle qu'il y a un nouveau fil
        }
        pointDrawline1 = QPoint();
        pointDrawline2 = QPoint();
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
    QLabel *child = dynamic_cast<QLabel*> (childAt(event->pos()));

    if (event->button() == Qt::LeftButton) {
        if (!child) {
            return;
        }

        if (pushButton == true) {
            pointDrawline1 = event->pos();
            pushButton = false;
            labelConnecter1 = child;

            //QByteArray itemData;
            //QDataStream dataStream(&itemData, QIODevice::WriteOnly);


            //dataStream << qLabelFactice; // << QPoint(event->pos());
            QMimeData *mimeData = new QMimeData;
            mimeData->setData("application/x-dnditemdata", QByteArray());

            QDrag *drag = new QDrag(this);
            drag->setMimeData(mimeData);
            drag->setHotSpot(event->pos());

            drag->exec(Qt::CopyAction | Qt::MoveAction, Qt::CopyAction);

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

        if (drag->exec(Qt::CopyAction | Qt::MoveAction,
                Qt::CopyAction) == Qt::MoveAction)
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


    //connectAct = new QAction(tr("&Connect"), this);
    //connectAct->setStatusTip(tr("Connecter un périphérique à un autre"));
    //if (firstConnect == true) {
    //    labelConnecter1 = child;
    //} else {
    //    labelConnecter2 = child;
    //}
    //std::cout<<"le label : "<<labelMenuConnecter->objectName().toStdString();
    //connect(connectAct, SIGNAL(triggered()), this, SLOT(connectStocker()));
    labelConnecter1 = child;

    deleteAct = new QAction(tr("&Delete"), this);
    deleteAct->setStatusTip(tr("Delete le périphérique séléctionné"));
    connect(deleteAct, SIGNAL(triggered()), this, SLOT(deleteItem()));

    disconnectAct = new QAction(tr("&Disconnect"), this);
    disconnectAct->setStatusTip(tr("Deconnecter les deux péripherique "
            "sélectionner"));
    if (firstDisconnect == true) {
        labelDisconnecter1 = child;
    } else {
        labelDisconnecter2 = child;
    }
    connect(disconnectAct, SIGNAL(triggered()), this,
            SLOT(disconnectStocker()));

    //menu.addAction(connectAct);
    menu.addAction(deleteAct);
    menu.addAction(disconnectAct);
    menu.exec(event->globalPos());
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
    std::cout << labelConnecter1->objectName().toStdString() << endl;
    labelConnecter1->close();
}

void NetworkGameArea::descriptor() {
    if (labelConnecter1 != NULL && labelConnecter2 != NULL) {
        std::cout << labelConnecter1->objectName().toStdString() <<
                "est connecté sur le port sue l'interface numéro " <<
                portConnecterChoice->portSelectedDevice1 << " à " <<
                labelConnecter2->objectName().toStdString() <<
                " sur l'interface numéro " <<
                portConnecterChoice->portSelectedDevice2 << "\n\n";
    }
}

void NetworkGameArea::pushButtonPressed() {

    /**qDebug("CETTE FONCTION EST CELLE QUI SPÉCIFIERA QUE LES DEVICES SONT 
     * BIEN CONNECTÉ");
     */
    pushButton = true;
}

void NetworkGameArea::saveLabelList() {
    db->launchSave();
    QList<QLabel*>::iterator i;
    for (i = qLabelListSave.begin(); i != qLabelListSave.end(); ++i) {
        QLabel *test = *i;
        /**
         * ajout des données du Qlabel dans la BDD (sauvegarde.db)
         */
        db->create(test);
        //penser à fermer la BDD

    }
}

void NetworkGameArea::slotSaveLabelList() {
    saveLabelList();
}

void NetworkGameArea::slotLoadLabelList() {
    loadLabelList();
}

void NetworkGameArea::loadLabelList() {
    QPixmap pixmapHUB(":/HUB.png");
    QPixmap pixmapRouteur(":/Routeur.png");
    QPixmap pixmapSwitch(":/Switch.png");
    QPixmap pixmapRouteurNat(":/RouteurNat.png");
    QPixmap pixmapOrdi(":/Ordi.png");

    QList<QLabel*>::iterator i;
    qLabelListLoad = db->load();
    for (i = qLabelListLoad.begin(); i != qLabelListLoad.end(); ++i) {
        QLabel *labelAdded = *i;
        if (labelAdded->objectName() == "labelPixmapHUB") {
            labelAdded->setPixmap(pixmapHUB);
        } else if (labelAdded->objectName() == "labelPixmapRouteur") {
            labelAdded->setPixmap(pixmapRouteur);
        } else if (labelAdded->objectName() == "labelPixmapSwitch") {
            labelAdded->setPixmap(pixmapSwitch);
        } else if (labelAdded->objectName() == "labelPixmapRouteurNat") {
            labelAdded->setPixmap(pixmapRouteurNat);
        } else if (labelAdded->objectName() == "labelPixmapOrdi") {
            labelAdded->setPixmap(pixmapOrdi);
        }
        labelAdded->setParent(this);
        labelAdded->setFixedSize(50, 50);
        labelAdded->setScaledContents(true);
        labelAdded->show();
        qDebug() << labelAdded->pos();
    }
}
