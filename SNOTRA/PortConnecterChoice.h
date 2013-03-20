/* 
 * File:   PortConnecterChoice.h
 * Author: antoine
 *
 * Created on 20 mars 2013, 20:12
 */

#ifndef _PORTCONNECTERCHOICE_H
#define	_PORTCONNECTERCHOICE_H

#include "ui_PortConnecterChoice.h"

class PortConnecterChoice : public QDialog {
    Q_OBJECT
public:
    PortConnecterChoice();
    virtual ~PortConnecterChoice();
    int portSelected;


public slots:
    int setPort();
private:
    Ui::PortConnecterChoice widget;

};

#endif	/* _PORTCONNECTERCHOICE_H */
