/* 
 * File:   Confirmation.h
 * Author: antoine
 *
 * Created on 5 avril 2013, 20:06
 */

#ifndef _CONFIRMATION_H
#define	_CONFIRMATION_H

#include "ui_Confirmation.h"

class Confirmation : public QDialog {
    Q_OBJECT
public:
    /**
     * create a window that asks if you are sure you want to overwrite the 
     * existing backup
     * 
     */
    Confirmation();
    virtual ~Confirmation();
    /**
     * set replyOK to overwrite the existing backup
     */
    void setReplyOK();
    bool getReplyOK();
private:
    Ui::Confirmation widget;
    bool replyOK;
public slots:
    void slotReplyOK();
};

#endif	/* _CONFIRMATION_H */
