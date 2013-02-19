/* 
 * File:   Game.h
 * Author: antoine
 *
 * Created on 12 février 2013, 22:17
 */

#ifndef _GAME_H
#define	_GAME_H

#include "ui_Game.h"
#include <QtGui>

class Game : public QMainWindow {
    Q_OBJECT
public:
    Game();
    void setPictureItemNetwork();
    void setGridLayout();
    virtual ~Game();
private:
    Ui::Game gameWindow;

    QLabel *HUB;
    QLabel *Ordi;
    QLabel *Switch;
    QLabel *RouteurNat;
    QLabel *Routeur;

    QGridLayout *gridLayoutToolBox;

public slots:
    void addSubWindowToolBox();
};

#endif	/* _GAME_H */
