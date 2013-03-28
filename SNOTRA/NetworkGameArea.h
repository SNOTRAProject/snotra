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
    Ui::NetworkGameArea widget;

    void dragEnterEvent(QDragEnterEvent *event);
    void dragMoveEvent(QDragMoveEvent*);


    QPoint pointDrawline1;
    QPoint pointDrawline2;

    QPainter paint;
    void dropEvent(QDropEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
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





public slots:
    void connectStocker();
    void deleteItem();
    void disconnectStocker();
    void changeValuePort();
    void pushButtonPressed();
};


#endif	/* _NETWORKGAMEAREA_H */
