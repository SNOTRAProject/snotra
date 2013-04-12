/*
 * File:   Charger.cpp
 * Author: antoine
 *
 * Created on 2 avril 2013, 14:08
 */

#include "LoadManager.h"
#include <QDebug>

LoadManager::LoadManager() {
    widget.setupUi(this);
    connect(this->widget.pushButtonOK, SIGNAL(pressed()), this,
            SLOT(slotGetLineString()));
    resetGame = false;
}

void LoadManager::slotGetLineString() {
    setResultLineString();
}

/**
 * set the result choosen in the comboBox
 */
void LoadManager::setResultLineString() {
    resultLineString = this->widget.comboBox->currentText();
    qDebug()<<resultLineString;
    setResetGame(true);
}

QString LoadManager::getResultLineString(){
    return resultLineString;
}

LoadManager::~LoadManager() {
}

bool LoadManager::getResetGame(){
    return resetGame;
}

void LoadManager::setResetGame(bool choice){
    resetGame = choice;
}
