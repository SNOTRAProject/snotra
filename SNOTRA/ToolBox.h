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
private:
    Ui::ToolBox widget;

protected:
    void dragEnterEvent(QDragEnterEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);
    void mousePressEvent(QMouseEvent *event);
};

#endif	/* _TOOLBOX_H */
