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
    QMdiSubWindow * networkGameAreaMdi = new QMdiSubWindow;

    gameWindow.mdiArea->addSubWindow(toolBoxMdi);
    gameWindow.mdiArea->addSubWindow(networkGameAreaMdi);

    toolBox = new ToolBox();
    networkGameArea = new NetworkGameArea();

    toolBoxMdi->setWidget(toolBox);
    networkGameAreaMdi->setWidget(networkGameArea);

    networkGameAreaMdi->setGeometry(300, 0, 1200, 800);

    connect(gameWindow.actionTool_Box, SIGNAL(activated()), toolBox,
            SLOT(show()));
    connect(toolBox->widget.pushButtonFil, SIGNAL(clicked()), networkGameArea,
            SLOT(pushButtonPressed()));
    connect(gameWindow.actionSauvegarder, SIGNAL(activated()), networkGameArea, 
            SLOT(sayCoucou()));


    //    QObject::connect(networkGameArea->buttonTest, SIGNAL(clicked()),
    //            networkGameArea, SLOT(setX()));
}

Game::~Game() {
}
