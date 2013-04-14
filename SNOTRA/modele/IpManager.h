/* 
 * File:   IpManager.h
 * Author: antoine
 *
 * Created on 12 avril 2013, 13:35
 */

#ifndef _IP_MANAGER_H
#define	_IP_MANAGER_H

#include "ui_ChangeIp.h"

class ChangeIp : public QDialog {
    Q_OBJECT
public:
    /**
     * create the window to reset IP
     */
    ChangeIp();
    virtual ~ChangeIp();
private:
    Ui::ChangeIp widget;
};

#endif	/* _CHANGEIP_H */
