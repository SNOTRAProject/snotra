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

    /*int x;
    int y;*/
    void dragEnterEvent(QDragEnterEvent *event);
    //    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void contextMenuEvent(QContextMenuEvent *event);

private:
    Ui::NetworkGameArea widget;
    QPoint point;
    QGraphicsScene* scene;
    QGraphicsProxyWidget *proxy;
    QAction *newAct;


public slots:
    // void setX();

};

#endif	/* _NETWORKGAMEAREA_H */
