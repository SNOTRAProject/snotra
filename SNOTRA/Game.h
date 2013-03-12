/* 
 * File:   Game.h
 * Author: antoine
 *
 * Created on 12 février 2013, 22:17
 */

#ifndef _GAME_H
#define	_GAME_H

#include "ui_Game.h"
#include "ToolBox.h"
#include "NetworkGameArea.h"
#include <QtGui>

class Game : public QMainWindow {
    Q_OBJECT
public:
    Game();
    virtual ~Game();
private:
    Ui::Game gameWindow;

    ToolBox *toolBox;
    NetworkGameArea * networkGameArea;

    QLabel *HUB;
    QLabel *Ordi;
    QLabel *Switch;
    QLabel *RouteurNat;
    QLabel *Routeur;

    QGridLayout *gridLayoutToolBox;
    ToolBox *toolbox;

public slots:
};

#endif	/* _GAME_H */
