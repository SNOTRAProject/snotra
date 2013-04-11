/*
 * File:   Charger.cpp
 * Author: antoine
 *
 * Created on 2 avril 2013, 14:08
 */

#include "Charger.h"
#include <QDebug>
/**
 * lauch the window charger
 */
Charger::Charger() {
    widget.setupUi(this);
    connect(this->widget.pushButtonOK, SIGNAL(pressed()), this,
            SLOT(slotGetLineString()));
    resetGame = false;
}

void Charger::slotGetLineString() {
    setResultLineString();
}

/**
 * set the result choosen in the comboBox
 */
void Charger::setResultLineString() {
    resultLineString = this->widget.comboBox->currentText();
    qDebug()<<resultLineString;
    setResetGame(true);
}

QString Charger::getResultLineString(){
    return resultLineString;
}

Charger::~Charger() {
}

bool Charger::getResetGame(){
    return resetGame;
}

void Charger::setResetGame(bool choice){
    resetGame = choice;
}
