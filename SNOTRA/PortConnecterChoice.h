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
    int portSelectedDevice1;
    int portSelectedDevice2;

    Ui::PortConnecterChoice widget;
    void setPortSelected(int portSelectedDevice1, int portSelectedDevice2);
    void setText(QString Device1Name, QString Device2Name);


signals:
    void signalPortChanged();


public slots:

    void setInterface();


private:

};

#endif	/* _PORTCONNECTERCHOICE_H */
