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
    /**
     * create the toolbox. It contains all devices to drag and drop in the 
     * NetworkGameArea object
     */
    ToolBox();
    virtual ~ToolBox();
    Ui::ToolBox widget;

private:
    //Ui::ToolBox widget;

    /**
     * To enable dragging from the icon, we need to act on a mouse press event. 
     * We do this by reimplementing QWidget::mousePressEvent() and setting up a 
     * QDrag object.
     * @param event
     */
    void mousePressEvent(QMouseEvent *event);

};
#endif	/* _TOOLBOX_H */
