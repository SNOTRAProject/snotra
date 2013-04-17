/* 
 * File:   Sauvegarder.h
 * Author: antoine
 *
 * Created on 1 avril 2013, 21:15
 */

#ifndef _SAUVEGARDER_H
#define	_SAUVEGARDER_H

#include "ui_BackupManager.h"

class BackupManager : public QDialog {
    Q_OBJECT
public:

    /**
     * Contructor
     * create a window for the user to set the name of the backup
     */
    BackupManager();
    virtual ~BackupManager();
    Ui::Sauvegarder widget;
    void setResultLineString();
    QString getResultLineString();
private:
    QString resultLineString;
public slots:
    void slotGetLineString();
};

#endif	/* _SAUVEGARDER_H */
