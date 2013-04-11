/*
 * File:   NumberOfInterfaceSetter.cpp
 * Author: antoine
 *
 * Created on 8 avril 2013, 18:09
 */

#include "NumberOfInterfaceSetter.h"
#include <QDebug>

/**
 * lauch the window NumberOfInterfaceSetter
 */
NumberOfInterfaceSetter::NumberOfInterfaceSetter() {
    widget.setupUi(this);
    connect(this->widget.pushButton, SIGNAL(pressed()), this,
            SLOT(slotSetNbInterfaces()));
}

NumberOfInterfaceSetter::~NumberOfInterfaceSetter() {
}

void NumberOfInterfaceSetter::slotSetNbInterfaces() {
    setNbInterfaces();
}
/**
 * set the number of interface set in the spinbox
 */
void NumberOfInterfaceSetter::setNbInterfaces() {
    nbInterfaces = this->widget.spinBox->value();
}

int NumberOfInterfaceSetter::getNbInterfaces() {
    return nbInterfaces;
}

