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
    connecterChoice = new ConnecterChoice();


    db = new DataBaseManager();
    addingItem = true;
}

NetworkGameArea::~NetworkGameArea() {
}

/**
 * drag the item
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

/**
 * drop the item selected
 * @param event
 */
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

            //ajout de la fenetre de paramétrage des proprités des devices
            if (addingItem) {
                numberOfInterfaces = new NumberOfInterfaceSetter();
                numberOfInterfaces->exec();
                for (int i = 0; i < numberOfInterfaces->getNbInterfaces(); i++) {
                    propertiesOfInterfaces = new PropertiesOfIterfaceSetter();
                    QString str = QString::number(i + 1);
                    propertiesOfInterfaces->setText("Veuillez entrer le nom de "
                            "l'interface numero : " + str);
                    propertiesOfInterfaces->exec();
                }
            }
            addingItem = true;

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

            // Mode fil
            qDebug("Création d'un fil");

            connecterChoice = new ConnecterChoice();
            connecterChoice->setText(labelConnecter1->objectName(),
                    labelConnecter2->objectName());
            connecterChoice->exec();

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

/**
 * proceed according to the event
 * @param event
 */
void NetworkGameArea::mousePressEvent(QMouseEvent *event) {
    QLabel *child = dynamic_cast<QLabel*> (childAt(event->pos()));

    if (event->button() == Qt::LeftButton) {
        if (!child) {
            return;
        }
        addingItem = false;
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

/**
 * make the context menu
 * @param event
 */
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

/**
 * delete the item
 */
void NetworkGameArea::deleteItem() {
    /*
     LE CODE DOIT FAIRE L'OBJET D'UNE VERIFICATION : EST BIEN UN ITEM QUE JE 
     * FERME, ON UN COMPOSANT DE MA FENETRE ?
     
     */
    std::cout << labelConnecter1->objectName().toStdString() << endl;
    qLabelListSave.removeOne(labelConnecter1);
    qDebug() << labelConnecter1->objectName();
    labelConnecter1->close();
}

void NetworkGameArea::descriptor() {
    if (labelConnecter1 != NULL && labelConnecter2 != NULL) {
        std::cout << labelConnecter1->objectName().toStdString() <<
                "est connecté sur le port sue l'interface numéro " <<
                connecterChoice->getPortDevice1() << " à " <<
                labelConnecter2->objectName().toStdString() <<
                " sur l'interface numéro " <<
                connecterChoice->getPortDevice2() << "\n\n";
    }
}

void NetworkGameArea::pushButtonPressed() {
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
    if (db->getResetGame()) {
        resetGame();
        db->setResetGame(false);
    }
    //setResetGame(false)
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

void NetworkGameArea::resetGame() {
    QLabel *labelToRemove;

    QList<QLabel*>::iterator i;
    for (i = qLabelListSave.begin(); i != qLabelListSave.end(); ++i) {
        labelToRemove = *i;
        labelToRemove->close();
        qLabelListSave.removeOne(labelToRemove);
    }
}

void NetworkGameArea::slotResetGame() {
    resetGame();
}

void NetworkGameArea::closeEvent(QCloseEvent *event) {
    event->ignore();
}

//bool NetworkGameArea::browseList(QLabel *label) {
//    QList<QLabel*>::iterator i;
//    for (i = qLabelListSave.begin(); i != qLabelListSave.end(); ++i) {
//        QLabel *test = *i;
//        if (label == *i) {
//            qDebug() << "find !";
//            return true;
//        }
//    }
//    qDebug() << "pas trouvé";
//    return false;
//}