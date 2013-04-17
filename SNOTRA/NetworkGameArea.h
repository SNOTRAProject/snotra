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
#include "BackupManager.h"
#include "ConnecterChoice.h"
#include "PropertiesOfIterfaceSetter.h"
#include "NumberOfInterfaceSetter.h"
#include "ObjectToCommunicate.h"
#include "WireShark.h"

class NetworkGameArea : public QWidget {
    Q_OBJECT
public:
    /**
     * Create the window where the user can play and make his network 
     * configuration
     */
    NetworkGameArea();
    virtual ~NetworkGameArea();
    Ui::NetworkGameArea widget;

    /**
     * The dragEnterEvent() event handler is called when a drag is in progress and 
     * the mouse enters the NetworkGameArea object.
     * @param event
     */
    void dragEnterEvent(QDragEnterEvent *event);

    /**
     * set the two pointDrawLine to make a line when the user try to connect two 
     * devices
     * @param event
     */
    void dragMoveEvent(QDragMoveEvent*);

    /**
     * extracts the event's mime data and displays it accordingly.
     * if a new device is added from the toolBox, it calls a NumberOfInterfaceSetter 
     * object and a PropertiesOfInterfaceSetter object to set the new Item added
     * 
     * Can calls the ConnecterChoice object if the user want to connect devices
     */
    void dropEvent(QDropEvent *event);

    /**
     * To enable dragging from the icon, we need to act on a mouse press event. 
     * We do this by reimplementing QWidget::mousePressEvent() and setting up a 
     * QDrag object.
     * @param event
     */
    void mousePressEvent(QMouseEvent *event);

    /**
     * create the context menu and its associated action
     * appears when the user right-click
     * @param event
     */
    void contextMenuEvent(QContextMenuEvent *event);
    void closeEvent(QCloseEvent *event);

    /**
     * Show information about devices when the user connect devices
     * (just for debug)
     */
    void descriptor();
    int static signalFromPushButtonPressed();

private:
    QAction *wiresharkAct;
    QAction *deleteAct;
    QAction *disconnectAct;
    QAction *resetIPAct;
    bool firstConnect;
    bool firstDisconnect;

    /**
     * that lets us draw customized content, and a slot that is used to animate 
     * its contents (here a Qline object)
     * @param 
     */
    void paintEvent(QPaintEvent*);
    void signalPushButtonPressed();
    bool pushedButtonIsPressed;
    QLabel *labelConnecter1;
    QLabel *labelConnecter2;

    ObjectToCommunicate *item2;
    ObjectToCommunicate *item1;

    QLabel *labelDisconnecter1;
    QLabel *labelDisconnecter2;
    ConnecterChoice *connecterChoice;
    int port1;
    int port2;
    QPoint pointDrawline1;
    QPoint pointDrawline2;
    
    QPainter paint;
    QList<ObjectToCommunicate*> listItem;
    //QList<QLabel*> qLabelListSave;
    //QList<QLabel*> qLabelListLoad;
    DataBaseManager *db;
    std::string pixmapTab[5];
    PropertiesOfInterfaceSetter *propertiesOfInterfaces;

    NumberOfInterfaceSetter *numberOfInterfaces;
    bool addingItem;
    QVector<QPoint> pointPairs;
    WireShark *wireshark;    

//    /**
//     * add label in the NetworkGameArea object contained in the backup
//     */
//    void loadLabelList();
//
//    /**
//     * Make a list to make a backup
//     */
//    void saveLabelList();

    /**
     * Find the ObjectToCommunicate object associated whith the Qlabel Object
     * @param label
     * @return 
     */
    ObjectToCommunicate* findItem(QLabel* label);

    /**
     * Close all item in the NetworkGameArea
     */
//    void resetGame();
    ObjectToCommunicate *item;
    void paintWire(QVector<QPoint>);
    
public slots:
    /**
     * Close the item when the user click on delete in the conext menu
     */
    void deleteItem();
    void disconnectStocker();
    /**
     * Reset Ip of the device selected
     * Calls an IpManager object to reset IP
     */
    void resetIPItem();
    void launchWireshark();
    ////    void changeValuePort();
    void pushButtonPressed();
//    void slotSaveLabelList();
//    void slotLoadLabelList();
//    void slotResetGame();
};


#endif	/* _NETWORKGAMEAREA_H */
