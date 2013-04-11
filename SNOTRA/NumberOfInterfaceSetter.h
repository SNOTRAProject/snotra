/* 
 * File:   NumberOfInterfaceSetter.h
 * Author: antoine
 *
 * Created on 8 avril 2013, 18:09
 */

#ifndef _NUMBEROFINTERFACESETTER_H
#define	_NUMBEROFINTERFACESETTER_H

#include "ui_NumberOfInterfaceSetter.h"

class NumberOfInterfaceSetter : public QDialog {
    Q_OBJECT
public:
    NumberOfInterfaceSetter();
    virtual ~NumberOfInterfaceSetter();
    void setNbInterfaces();
    int getNbInterfaces();

public slots:
    void slotSetNbInterfaces();
private:
    Ui::NumberOfInterfaceSetter widget;
    int nbInterfaces;
};

#endif	/* _NUMBEROFINTERFACESETTER_H */
