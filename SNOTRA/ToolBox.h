/* 
 * File:   ToolBox.h
 * Author: antoine
 *
 * Created on 4 mars 2013, 16:55
 */

#ifndef _TOOLBOX_H
#define	_TOOLBOX_H

#include "ui_ToolBox.h"

class ToolBox : public QWidget {
    Q_OBJECT
public:
    ToolBox();
    virtual ~ToolBox();
private:
    Ui::ToolBox widget;
};

#endif	/* _TOOLBOX_H */
