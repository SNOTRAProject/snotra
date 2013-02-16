/*
 * File:   Game.cpp
 * Author: antoine
 *
 * Created on 12 février 2013, 22:17
 */

#include "Game.h"

Game::Game() {
    QGridLayout *gridLayoutToolBox = new QGridLayout;
    widget.setupUi(this);

    gridLayoutToolBox->addWidget(widget.HUB, 0, 0);
    gridLayoutToolBox->addWidget(widget.labelHUBToolBox, 0, 1);
    gridLayoutToolBox->addWidget(widget.Ordi, 1, 0);
    gridLayoutToolBox->addWidget(widget.labelOrdiToolBox, 1, 1);
    gridLayoutToolBox->addWidget(widget.Switch, 2, 0);
    gridLayoutToolBox->addWidget(widget.labelSwitchToolBox, 2, 1);
    gridLayoutToolBox->addWidget(widget.RouteurNat, 3, 0);
    gridLayoutToolBox->addWidget(widget.labelRouteurNatToolBox, 3, 1);
    gridLayoutToolBox->addWidget(widget.Routeur, 4, 0);
    gridLayoutToolBox->addWidget(widget.labelRouteurToolBox, 4, 1);
    widget.toolBox->setLayout(gridLayoutToolBox);




    //gridLayoutToolBox->addWidget(widget.toolButton, 0, 1);*/

}

Game::~Game() {
}
