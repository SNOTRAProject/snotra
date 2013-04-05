/* 
 * File:   Charger.h
 * Author: antoine
 *
 * Created on 2 avril 2013, 14:08
 */

#ifndef _CHARGER_H
#define	_CHARGER_H

#include "ui_Charger.h"

class Charger : public QDialog {
    Q_OBJECT
public:
    Ui::Charger widget;
    Charger();
    virtual ~Charger();
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
