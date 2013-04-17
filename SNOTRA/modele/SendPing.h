/* 
 * File:   SendPing.h
 * Author: marc
 *
 * Created on 17 avril 2013, 11:00
 */

#ifndef _SENDPING_H
#define	_SENDPING_H

#include "ui_SendPing.h"

class SendPing : public QDialog {
    Q_OBJECT
public:
    SendPing();
    virtual ~SendPing();
private:
    Ui::SendPing widget;
};

#endif	/* _SENDPING_H */
