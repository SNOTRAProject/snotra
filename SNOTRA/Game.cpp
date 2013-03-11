/*
 * File:   Game.cpp
 * Author: antoine
 *
 * Created on 12 février 2013, 22:17
 */

#include "Game.h"

Game::Game() {

    gameWindow.setupUi(this);

    QMdiSubWindow * toolBoxMdi = new QMdiSubWindow;
    gameWindow.mdiArea->addSubWindow(toolBoxMdi);
    toolBox = new ToolBox();
    toolBoxMdi->setWidget(toolBox);

    connect(gameWindow.actionTool_Box, SIGNAL(activated()), toolBox, SLOT(show()));

}

Game::~Game() {
}
