/*
 * File:   Sauvegarder.cpp
 * Author: antoine
 *
 * Created on 1 avril 2013, 21:15
 */

#include <qt4/QtCore/qobject.h>
#include <QDebug>

#include "Sauvegarder.h"

Sauvegarder::Sauvegarder() {
    widget.setupUi(this);
    connect(this->widget.pushButtonOK, SIGNAL(pressed()), this,
            SLOT(slotGetLineString()));
}

Sauvegarder::~Sauvegarder() {
}

void Sauvegarder::slotGetLineString() {
    setResultLineString();
}

void Sauvegarder::setResultLineString() {
    resultLineString = this->widget.lineEdit->text();
    qDebug()<<this->widget.lineEdit->text();
}

QString Sauvegarder::getResultLineString(){
    return resultLineString;
}