/* 
 * File:   ToolBox.h
 * Author: antoine
 *
 * Created on 4 mars 2013, 16:55
 */

#ifndef _TOOLBOX_H
#define	_TOOLBOX_H

#include <qt4/QtCore/qmimedata.h>
#include <qt4/QtGui/qevent.h>

#include "ui_ToolBox.h"

class ToolBox : public QWidget {
    Q_OBJECT
public:
    ToolBox();
    virtual ~ToolBox();
    Ui::ToolBox widget;

private:
    //Ui::ToolBox widget;
    void mousePressEvent(QMouseEvent *event);

};
#endif	/* _TOOLBOX_H */
