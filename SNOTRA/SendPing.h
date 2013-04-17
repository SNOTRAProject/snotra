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
    /**
     * Default constructor
     * create a window to set target's ip address to launch ping
     */
    SendPing();
    virtual ~SendPing();
    QString getDestinationIP() ;
    
private:
    Ui::SendPing widget;
    void setIp();
    QString destinationIP;
    
    public slots : 
        void slotSetDestinationIp();
};

#endif	/* _SENDPING_H */
