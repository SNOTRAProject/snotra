/*
 * File:   Game.cpp
 * Author: antoine
 *
 * Created on 12 février 2013, 22:17
 */

#include "Game.h"
#include "Sauvegarder.h"

/**
 * the  window Game and connect the toolbox and the area of the game
 */
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
    connect(gameWindow.actionCharger, SIGNAL(activated()), networkGameArea,
            SLOT(slotLoadLabelList()));
    connect(gameWindow.actionSauvegarder, SIGNAL(activated()), networkGameArea,
            SLOT(slotSaveLabelList()));
    connect(gameWindow.actionNouvelle, SIGNAL(activated()), networkGameArea, 
            SLOT(slotResetGame()));
}

Game::~Game() {
}
