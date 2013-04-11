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
    void setText(QString textName);
    void setName(QString name);
    void setIP(QString IP);
    
private:
    Ui::PropertiesOfIterfaceSetter widget;
    QString name;
    QString IP;
    
public slots:
    void slotSetProperties();
};

#endif	/* _PROPERTIESOFITERFACESETTER_H */
