/* 
 * File:   Charger.h
 * Author: antoine
 *
 * Created on 2 avril 2013, 14:08
 */

#ifndef _CHARGER_H
#define	_CHARGER_H

#include "ui_LoadManager.h"

class LoadManager : public QDialog {
    Q_OBJECT
public:
    Ui::LoadManager widget;
    /**
     * lauch the window to choose the backup avaible in the database
     */
    LoadManager();
    virtual ~LoadManager();
    void setResultLineString();
    QString getResultLineString();
    void setResetGame(bool choice);
    bool getResetGame();
private:
    QString resultLineString;
    bool resetGame;

public slots:
    void slotGetLineString();
};

#endif	/* _CHARGER_H */
