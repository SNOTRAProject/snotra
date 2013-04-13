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
    
    /**
     * Create a window to set the interfaces number of the selected device
     */
    NumberOfInterfaceSetter();
    virtual ~NumberOfInterfaceSetter();

    /**
     * Set the number of interface set in the spinbox
     */
    void setNbInterfaces();
    int getNbInterfaces();

public slots:
    void slotSetNbInterfaces();
private:
    Ui::NumberOfInterfaceSetter widget;
    int nbInterfaces;
};

#endif	/* _NUMBEROFINTERFACESETTER_H */
