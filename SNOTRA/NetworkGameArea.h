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
    QMouseEvent *mouseEvent;
    QPushButton *buttonTest;
    int x;

private:
    Ui::NetworkGameArea widget;
    QPoint point;

    

public slots:
    void setX();
};

#endif	/* _NETWORKGAMEAREA_H */
