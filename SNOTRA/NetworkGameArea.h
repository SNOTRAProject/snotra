/* 
 * File:   NetworkGameArea.h
 * Author: antoine
 *
 * Created on 10 mars 2013, 16:01
 */

#ifndef _NETWORKGAMEAREA_H
#define	_NETWORKGAMEAREA_H

#include "ui_NetworkGameArea.h"
#include <QApplication>
#include <QtGui>
#include <QMouseEvent>
#include <iostream>
#include "DataBaseManager.h"
#include "Sauvegarder.h"
#include "modele/ConnecterChoice.h"
#include "modele/PropertiesOfIterfaceSetter.h"
#include "modele/NumberOfInterfaceSetter.h"

class NetworkGameArea : public QWidget {
    Q_OBJECT
public:
    NetworkGameArea();
    virtual ~NetworkGameArea();
    Ui::NetworkGameArea widget;
    void dragEnterEvent(QDragEnterEvent *event);
    void dragMoveEvent(QDragMoveEvent*);
    void dropEvent(QDropEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void contextMenuEvent(QContextMenuEvent *event);
    void closeEvent(QCloseEvent *event);
    void descriptor();
    int static signalFromPushButtonPressed();

private:
    QAction *connectAct;
    QAction *deleteAct;
    QAction *disconnectAct;
    bool firstConnect;
    bool firstDisconnect;
    void paintEvent(QPaintEvent*);
    void signalPushButtonPressed();
    bool pushButton;
    QLabel *labelConnecter1;
    QLabel *labelConnecter2;
    QLabel *labelDisconnecter1;
    QLabel *labelDisconnecter2;
    ConnecterChoice *connecterChoice;
    int port1;
    int port2;
    QPoint pointDrawline1;
    QPoint pointDrawline2;
    QPainter paint;
    QList<QLabel*> qLabelListSave;
    QList<QLabel*> qLabelListLoad;
    DataBaseManager *db;
    std::string pixmapTab[5];
    PropertiesOfIterfaceSetter *propertiesOfInterfaces;
    NumberOfInterfaceSetter *numberOfInterfaces;
    bool addingItem;
    void loadLabelList();
    void saveLabelList();
    void resetGame();
public slots:
    //    void connectStocker();
    void deleteItem();
    void disconnectStocker();
    ////    void changeValuePort();
    void pushButtonPressed();
    void slotSaveLabelList();
    void slotLoadLabelList();
    void slotResetGame();
};


#endif	/* _NETWORKGAMEAREA_H */
