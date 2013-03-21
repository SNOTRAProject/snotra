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
#include "PortConnecterChoice.h"

class NetworkGameArea : public QWidget {
    Q_OBJECT
public:
    NetworkGameArea();
    virtual ~NetworkGameArea();

    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);
    void mousePressEvent(QMouseEvent *event);
    QLabel *labelConnecter1;
    QLabel *labelConnecter2;

    QLabel *labelDisconnecter1;
    QLabel *labelDisconnecter2;

    PortConnecterChoice *portConnecterChoice1;
    PortConnecterChoice *portConnecterChoice2;



    int port1;
    int port2;

    void contextMenuEvent(QContextMenuEvent *event);
    void descriptor();

private:
    Ui::NetworkGameArea widget;
    QAction *connectAct;
    QAction *deleteAct;
    QAction *disconnectAct;
    bool firstConnect;
    bool firstDisconnect;


    //void paintEvent(QPaintEvent *);



public slots:
    void connectStocker();
    void deleteItem();
    void disconnectStocker();
    void changeValuePort();
};


#endif	/* _NETWORKGAMEAREA_H */
