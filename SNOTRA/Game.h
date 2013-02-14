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
    virtual ~Game();
private:
    Ui::Game widget;
};

#endif	/* _GAME_H */
