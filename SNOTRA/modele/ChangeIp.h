/* 
 * File:   ChangeIp.h
 * Author: antoine
 *
 * Created on 12 avril 2013, 13:35
 */

#ifndef _CHANGEIP_H
#define	_CHANGEIP_H

#include "ui_ChangeIp.h"

class ChangeIp : public QDialog {
    Q_OBJECT
public:
    ChangeIp();
    virtual ~ChangeIp();
private:
    Ui::ChangeIp widget;
};

#endif	/* _CHANGEIP_H */
