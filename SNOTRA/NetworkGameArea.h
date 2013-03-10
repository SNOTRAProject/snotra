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

class NetworkGameArea : public QWidget {
    Q_OBJECT
public:
    NetworkGameArea();
    virtual ~NetworkGameArea();
private:
    Ui::NetworkGameArea widget;


};

#endif	/* _NETWORKGAMEAREA_H */
