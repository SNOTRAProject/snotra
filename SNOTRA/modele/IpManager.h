/* 
 * File:   ChangeIp.h
 * Author: antoine
 *
 * Created on 12 avril 2013, 13:35
 */

#ifndef _CHANGEIP_H
#define	_CHANGEIP_H

#include "ui_ChangeIp.h"

class IpManager : public QDialog {
    Q_OBJECT
public:
    /**
     * create the window to reset IP
     */
    IpManager();
    virtual ~IpManager();
private:
    Ui::IpManager widget;
};

#endif	/* _CHANGEIP_H */
