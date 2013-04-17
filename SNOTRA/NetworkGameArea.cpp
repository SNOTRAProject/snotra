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
#include <QtCore/qnamespace.h>
#include <sstream>
#include <QtCore/qdebug.h>
#include <QtCore/qglobal.h>
#include <QtGui/QDropEvent>
#include "DataBaseManager.h"
#include "IpManager.h"
#include "WireShark.h"


using namespace std;

NetworkGameArea::NetworkGameArea() {
    pushedButtonIsPressed = false;
    widget.setupUi(this);
    setAcceptDrops(true);
    firstConnect = true;
    connecterChoice = new ConnecterChoice();
    db = new DataBaseManager();
}

NetworkGameArea::~NetworkGameArea() {
}

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
    QPainter painter;
    painter.begin(this);
    painter.setPen(Qt::black);
    if (!pointDrawline1.isNull() && !pointDrawline2.isNull()) {
        QLine line(pointDrawline1, pointDrawline2);
        painter.drawLine(line);
    }
    pointPairs.clear();
    for (auto& it1 : listItem) {
        for (auto& it2 : listItem) {
            if (it1 != it2) {
                if (it1->isConnectedTo(it2->getDevice())) {
                    QPoint p1(it1->getLabel()->pos().x()
                            + it1->getLabel()->width() / 2, it1->getLabel()->pos().y()
                            + it1->getLabel()->height() / 2);
                    QPoint p2(it2->getLabel()->pos().x()
                            + it2->getLabel()->width() / 2, it2->getLabel()->pos().y()
                            + it2->getLabel()->height() / 2);
                    QLine line(it1->getLabel()->pos(),
                            it2->getLabel()->pos());
                    pointPairs.append(p1);
                    pointPairs.append(p2);

                }
            }
        }
    }
    qDebug() << "liste item" << listItem.size();
    qDebug() << "nombre de ligne " << pointPairs.size();
    paintWire(pointPairs);
    painter.end();
}

void NetworkGameArea::dropEvent(QDropEvent *event) {
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
            QLabel *newIcon;
            if (event->dropAction() == Qt::CopyAction) {
                newIcon = new QLabel(this);
                newIcon->setPixmap(pixmap);
                newIcon->setScaledContents(true);
                newIcon->move(event->pos() - offset);
                newIcon->setFixedSize(50, 50);
                newIcon->setObjectName(name);
                std::cout << "le nom de l'objet : " <<
                        qPrintable(newIcon->objectName()) << endl;
                newIcon->show();
                numberOfInterfaces = new NumberOfInterfaceSetter();
                numberOfInterfaces->exec();
                int sizeOfInterfaceNameArray = numberOfInterfaces
                        ->getNbInterfaces();
                std::vector<std::string> interfaceName
                        = std::vector<std::string > ();
                std::vector<std::string> IP
                        = std::vector<std::string > ();
                for (int i = 0; i < numberOfInterfaces->getNbInterfaces();
                        i++) {
                    propertiesOfInterfaces = new
                            PropertiesOfInterfaceSetter();
                    QString str = QString::number(i + 1);
                    propertiesOfInterfaces->setText(
                            "Veuillez entrer le nom de  l'interface numero : "
                            + str);
                    if (newIcon->objectName().compare("hub") == 0) {
                        propertiesOfInterfaces->widget.textBrowserIP->hide();
                        propertiesOfInterfaces->widget.lineEditSetIP->hide();
                    }
                    propertiesOfInterfaces->exec();
                    interfaceName.push_back(
                            propertiesOfInterfaces->widget.lineEditSetName
                            ->text().toStdString());
                    IP.push_back(propertiesOfInterfaces->widget.lineEditSetIP
                            ->text().toStdString());
                }

                ///////////////////////////////////////////////////////////
                //          CONCEPTION DE L'OBJET POUR COMMUNIQUER
                ///////////////////////////////////////////////////////////

                item = new ObjectToCommunicate(newIcon,
                        numberOfInterfaces->getNbInterfaces(), interfaceName, IP);
                item->setSizeOfInterfaceNameArray(sizeOfInterfaceNameArray);
                item->setLabel(newIcon);
                listItem.append(item);

            } else if (event->dropAction() == Qt::MoveAction) {
                event->source()->move(event->pos() - offset);
            }

        } else if (childAt(event->pos()) != NULL) {
            QLabel *child = dynamic_cast<QLabel*> (childAt(event->pos()));
            labelConnecter2 = child;
            item2 = findItem(labelConnecter2);
            item1 = findItem(labelConnecter1);
            connecterChoice = new ConnecterChoice();
            connecterChoice->setText(labelConnecter1->objectName(),
                    labelConnecter2->objectName());
            QStringList listOfInterfacesItem1;
            for (int i = 0; i < item1->getSizeOfInterfaceNameArray(); i++) {
                listOfInterfacesItem1.append(item1->getInterfaceName()[i]
                        .c_str());
            }
            QStringList listOfInterfacesItem2;
            for (int i = 0; i < item2->getSizeOfInterfaceNameArray(); i++) {
                listOfInterfacesItem2.append(item2->getInterfaceName()[i]
                        .c_str());
            }
            connecterChoice->widget.comboBoxChoiceInterfaceDevice1
                    ->addItems(listOfInterfacesItem1);
            connecterChoice->widget.comboBoxChoiceInterfaceDevice2
                    ->addItems(listOfInterfacesItem2);
            connecterChoice->exec();
            item1->connectDevice(item1->getDevice(), item2->getDevice(),
                    item2->getDevice()->getNetworkInterfaceIdByName(
                    connecterChoice->getInterfaceName1()),
                    connecterChoice->getPortDevice1(),
                    item1->getDevice()->getNetworkInterfaceIdByName(
                    connecterChoice->getInterfaceName2()),
                    connecterChoice->getPortDevice2());
            descriptor();
            QLine lineToAdd(item2->getLabel()->pos(), item1->getLabel()->pos());
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

void NetworkGameArea::mousePressEvent(QMouseEvent * event) {
    QLabel *child = dynamic_cast<QLabel*> (childAt(event->pos()));
    if (event->button() == Qt::LeftButton) {
        if (!child) {
            return;
        }
        if (pushedButtonIsPressed) {
            pointDrawline1 = event->pos();
            pushedButtonIsPressed = false;
            labelConnecter1 = child;
            QMimeData *mimeData = new QMimeData;
            mimeData->setData("application/x-dnditemdata", QByteArray());
            QDrag *drag = new QDrag(this);
            drag->setMimeData(mimeData);
            drag->setHotSpot(event->pos());
            drag->exec(Qt::MoveAction);
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
        QDrag *drag = new QDrag(child);
        drag->setMimeData(mimeData);
        drag->setPixmap(pixmap);
        drag->setHotSpot(event->pos() - child->pos());
        QPixmap tempPixmap = pixmap;
        QPainter painter;
        painter.begin(&tempPixmap);
        painter.fillRect(pixmap.rect(), QColor(127, 127, 127, 127));
        painter.end();
        child->setPixmap(tempPixmap);
        if (drag->exec(Qt::MoveAction) != Qt::MoveAction) {
            child->show();
        }
        child->setPixmap(pixmap);

    }
    update();
}

void NetworkGameArea::contextMenuEvent(QContextMenuEvent * event) {
    QMenu menu(this);
    QLabel *child = dynamic_cast<QLabel*> (childAt(event->pos()));
    if (!child)
        return;

    labelConnecter1 = child;

    deleteAct = new QAction(tr("&Delete"), this);
    deleteAct->setStatusTip(tr("Delete le périphérique séléctionné"));
    connect(deleteAct, SIGNAL(triggered()), this, SLOT(deleteItem()));

    disconnectAct = new QAction(tr("&Disconnect"), this);
    disconnectAct->setStatusTip(tr("Deconnecter les deux péripherique "));
    //connect()

    resetIPAct = new QAction(tr("&resetIP"), this);
    resetIPAct->setStatusTip(tr("reparametrer l IP du périphérique"));
    connect(resetIPAct, SIGNAL(triggered()), this, SLOT(resetIPItem()));
    if (firstDisconnect == true) {
        labelDisconnecter1 = child;
    } else {
        labelDisconnecter2 = child;
    }
    connect(disconnectAct, SIGNAL(triggered()), this,
            SLOT(disconnectStocker()));

    wiresharkAct = new QAction(tr("&Open wireshark"), this);
    wiresharkAct->setStatusTip(tr("Open wireshark"));
    connect(wiresharkAct, SIGNAL(triggered()), this, SLOT(launchWireshark()));
    wireshark = new WireShark(*findItem(child));

    pingAct = new QAction(tr("&Send Ping"), this);
    pingAct->setStatusTip((tr("Send a ping to destination")));
    connect(pingAct, SIGNAL(triggered()), this, SLOT(launchSentPing()));

    //menu.addAction(connectAct);
    menu.addAction(deleteAct);
    menu.addAction(disconnectAct);
    menu.addAction(resetIPAct);
    menu.addAction(wiresharkAct);
    menu.addAction(pingAct);
    menu.exec(event->globalPos());

}

void NetworkGameArea::disconnectStocker() {
    /*
     *  LE CODE DOIT FAIRE L'OBJET D'UNE VÉRIFICATION : 
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

//void NetworkGameArea::launchWireshark(){
//    item->getWireshark().show();
//}

void NetworkGameArea::resetIPItem() {
    ObjectToCommunicate *item;
    item = findItem(labelConnecter1);

    //qDebug()<<
    IpManager *changeIp = new IpManager();
    changeIp->exec();
}

void NetworkGameArea::descriptor() {
    if (labelConnecter1 != NULL && labelConnecter2 != NULL) {
        qDebug() << "/////////////////////////////////////////////////////";
        std::cout << labelConnecter1->objectName().toStdString() <<
                "est connecté l'interface numéro " <<
                connecterChoice->getPortDevice1() << " à " <<
                labelConnecter2->objectName().toStdString() <<
                " sur l'interface numéro " <<
                connecterChoice->getPortDevice2() << "\n\n";
        qDebug() << "/////////////////////////////////////////////////////";

        qDebug() << item1->getLabel()->objectName() << " est connnecté à " <<
                item2->getLabel()->objectName();

        qDebug() << "////////////////////////////////////////////////////////";

    }
}

void NetworkGameArea::pushButtonPressed() {
    pushedButtonIsPressed = true;
}
// CETTE PARTIE EST DESTINÉ À LA SAUVEGARDE UNE FOIS QU'UNE LE MCD DE LA BASE 
// DE DONNÉE FAIT

//void NetworkGameArea::saveLabelList() {
//    db->launchSave();
//    QList<QLabel*>::iterator i;
//    for (i = qLabelListSave.begin(); i != qLabelListSave.end(); ++i) {
//        QLabel *test = *i;
//        /**
//         * ajout des données du Qlabel dans la BDD (sauvegarde.db)
//         */
//        db->create(test);
//        //penser à fermer la BDD
//
//    }
//}

//void NetworkGameArea::slotSaveLabelList() {
//    saveLabelList();
//}

//void NetworkGameArea::slotLoadLabelList() {
//    loadLabelList();
//}

//void NetworkGameArea::loadLabelList() {
//    QPixmap pixmapHUB(":/HUB.png");
//    QPixmap pixmapRouteur(":/Routeur.png");
//    QPixmap pixmapSwitch(":/Switch.png");
//    QPixmap pixmapRouteurNat(":/RouteurNat.png");
//    QPixmap pixmapOrdi(":/Ordi.png");
//
//    QList<QLabel*>::iterator i;
//    qLabelListLoad = db->load();
//    if (db->getResetGame()) {
//        resetGame();
//        db->setResetGame(false);
//    }
//    for (i = qLabelListLoad.begin(); i != qLabelListLoad.end(); ++i) {
//        QLabel *labelAdded = *i;
//        if (labelAdded->objectName() == "labelPixmapHUB") {
//            labelAdded->setPixmap(pixmapHUB);
//        } else if (labelAdded->objectName() == "labelPixmapRouteur") {
//            labelAdded->setPixmap(pixmapRouteur);
//        } else if (labelAdded->objectName() == "labelPixmapSwitch") {
//            labelAdded->setPixmap(pixmapSwitch);
//        } else if (labelAdded->objectName() == "labelPixmapRouteurNat") {
//            labelAdded->setPixmap(pixmapRouteurNat);
//        } else if (labelAdded->objectName() == "labelPixmapOrdi") {
//            labelAdded->setPixmap(pixmapOrdi);
//        }
//        labelAdded->setParent(this);
//        labelAdded->setFixedSize(50, 50);
//        labelAdded->setScaledContents(true);
//        labelAdded->show();
//        qDebug() << labelAdded->pos();
//    }
//}

//void NetworkGameArea::resetGame() {
//    QLabel *labelToRemove;
//
//    QList<QLabel*>::iterator i;
//    for (i = qLabelListSave.begin(); i != qLabelListSave.end(); ++i) {
//        labelToRemove = *i;
//        labelToRemove->close();
//        qLabelListSave.removeOne(labelToRemove);
//    }
//}

////void NetworkGameArea::slotResetGame() {
//    resetGame();
//}

void NetworkGameArea::closeEvent(QCloseEvent * event) {
    event->ignore();
}

ObjectToCommunicate* NetworkGameArea::findItem(QLabel* label) {
    QList<ObjectToCommunicate*>::iterator i;
    for (i = listItem.begin(); i != listItem.end(); ++i) {
        ObjectToCommunicate *result = *i;
        //   qDebug() << test->getLabel() << label;
        if (result->getLabel() == label) {
            return result;
        }
        //penser à fermer la BDD
    }
}

void NetworkGameArea::paintWire(QVector<QPoint> pointPairs) {

    QPainter painter;
    painter.begin(this);
    painter.drawLines(pointPairs);
    painter.end();
}

void NetworkGameArea::launchWireshark() {
    wireshark->show();
}

void NetworkGameArea::launchSentPing() {
    sendPing = new SendPing();
    sendPing->exec();
    qDebug() << sendPing->getDestinationIP();
}