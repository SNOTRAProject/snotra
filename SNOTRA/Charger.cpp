/*
 * File:   Charger.cpp
 * Author: antoine
 *
 * Created on 2 avril 2013, 14:08
 */

#include "Charger.h"
#include <QDebug>

Charger::Charger() {
    widget.setupUi(this);
    connect(this->widget.pushButtonOK, SIGNAL(pressed()), this,
            SLOT(slotGetLineString()));
}

void Charger::slotGetLineString() {
    setResultLineString();
}

void Charger::setResultLineString() {
    resultLineString = this->widget.comboBox->currentText();
    qDebug()<<resultLineString;
}
QString Charger::getResultLineString(){
    return resultLineString;
}

Charger::~Charger() {
}
