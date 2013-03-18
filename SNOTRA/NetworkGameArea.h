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

class NetworkGameArea : public QWidget {
    Q_OBJECT
public:
    NetworkGameArea();
    virtual ~NetworkGameArea();

    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void linker(QLabel &labelDestination);
    QLabel *labelConnecter1;
    QLabel *labelConnecter2;

    QLabel *labelDisconnecter1;
    QLabel *labelDisconnecter2;
    //QLabel *child;
    //void dragMoveEvent(QDragMoveEvent *event);
    void contextMenuEvent(QContextMenuEvent *event);

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
};

#endif	/* _NETWORKGAMEAREA_H */
