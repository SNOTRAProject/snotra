/* 
 * File:   PropertiesOfIterfaceSetter.h
 * Author: antoine
 *
 * Created on 8 avril 2013, 18:18
 */

#ifndef _PROPERTIESOFITERFACESETTER_H
#define	_PROPERTIESOFITERFACESETTER_H

#include "ui_PropertiesOfIterfaceSetter.h"

class PropertiesOfInterfaceSetter : public QDialog {
    Q_OBJECT
    
public:
    /**
     * Default Constructor 
     * create a window to set a name for each interface (ex : eth0)
     * and set ip by interface (no ip for a HUB)
     */
    PropertiesOfInterfaceSetter();
    virtual ~PropertiesOfInterfaceSetter();
    void setText(QString textName);
    void setName(QString name);
    void setIP(QString IP);
    Ui::PropertiesOfIterfaceSetter widget;
    
private:
    QString name;
    QString IP;
    
public slots:
    void slotSetProperties();
};

#endif	/* _PROPERTIESOFITERFACESETTER_H */
