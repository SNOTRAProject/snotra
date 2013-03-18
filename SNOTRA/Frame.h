/* 
 * File:   Frame.h
 * Author: marc
 *
 * Created on 18 mars 2013, 11:08
 */

#ifndef _FRAME_H
#define	_FRAME_H

#include "ui_Frame.h"

class Frame : public QDialog {
    Q_OBJECT
public:
    Frame();
    virtual ~Frame();
private:
    Ui::Frame widget;
};

#endif	/* _FRAME_H */
