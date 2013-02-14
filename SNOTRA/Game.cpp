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
    widget.toolBox->setLayout(gridLayoutToolBox);
    widget.toolBox->setWindowTitle("Tool Box");
    /*gridLayoutToolBox->addWidget(widget.pushButton_2, 0, 0);
    gridLayoutToolBox->addWidget(widget.toolButton, 0, 1);*/

}

Game::~Game() {
}
