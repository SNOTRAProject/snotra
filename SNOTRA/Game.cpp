/*
 * File:   Game.cpp
 * Author: antoine
 *
 * Created on 12 février 2013, 22:17
 */

#include "Game.h"

Game::Game() {

    gameWindow.setupUi(this);

    QMdiSubWindow * toolBox = new QMdiSubWindow;
    gameWindow.mdiArea->addSubWindow(toolBox);
    toolBox->setWidget(new ToolBox());
    toolBox->setAttribute(Qt::WA_DeleteOnClose);

    connect(gameWindow.actionTool_Box, SIGNAL(activated()), this, SLOT(addSubWindowToolBox()));

}

void Game::addSubWindowToolBox() {
    //setPictureItemNetwork();

    QMdiSubWindow * toolBox = new QMdiSubWindow;
    gameWindow.mdiArea->addSubWindow(toolBox);
    toolBox->setWidget(new ToolBox());
    gameWindow.mdiArea->addSubWindow(toolBox);
    toolBox->setAttribute(Qt::WA_DeleteOnClose);
    toolBox->resize(300, 800);
    toolBox->show();




}

Game::~Game() {
}
