/*
 * File:   NumberOfInterfaceSetter.cpp
 * Author: antoine
 *
 * Created on 8 avril 2013, 18:09
 */

#include "NumberOfInterfaceSetter.h"
#include <QDebug>


NumberOfInterfaceSetter::NumberOfInterfaceSetter() {
    widget.setupUi(this);
    connect(this->widget.pushButton, SIGNAL(pressed()), this,
            SLOT(slotSetNbInterfaces()));
    nbInterfaces = 0;
}

NumberOfInterfaceSetter::~NumberOfInterfaceSetter() {
}

void NumberOfInterfaceSetter::slotSetNbInterfaces() {
    setNbInterfaces();
}

void NumberOfInterfaceSetter::setNbInterfaces() {
    nbInterfaces = this->widget.spinBox->value();
}

int NumberOfInterfaceSetter::getNbInterfaces() {
    return nbInterfaces;
}

