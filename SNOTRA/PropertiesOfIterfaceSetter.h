/* 
 * File:   PropertiesOfIterfaceSetter.h
 * Author: antoine
 *
 * Created on 8 avril 2013, 18:18
 */

#ifndef _PROPERTIESOFITERFACESETTER_H
#define	_PROPERTIESOFITERFACESETTER_H

#include "ui_PropertiesOfIterfaceSetter.h"

class PropertiesOfIterfaceSetter : public QDialog {
    Q_OBJECT
public:
    PropertiesOfIterfaceSetter();
    virtual ~PropertiesOfIterfaceSetter();
private:
    Ui::PropertiesOfIterfaceSetter widget;
};

#endif	/* _PROPERTIESOFITERFACESETTER_H */
