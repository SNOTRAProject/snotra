/* 
 * File:   Sauvegarder.h
 * Author: antoine
 *
 * Created on 1 avril 2013, 21:15
 */

#ifndef _SAUVEGARDER_H
#define	_SAUVEGARDER_H

#include "ui_Sauvegarder.h"

class Sauvegarder : public QDialog {
    Q_OBJECT
public:

    /**
     * create a window for the user to set the name of the backup
     */
    Sauvegarder();
    virtual ~Sauvegarder();
    Ui::Sauvegarder widget;
    void setResultLineString();
    QString getResultLineString();
private:
    QString resultLineString;
public slots:
    void slotGetLineString();
};

#endif	/* _SAUVEGARDER_H */
