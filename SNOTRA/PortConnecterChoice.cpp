/*
 * File:   PortConnecterChoice.cpp
 * Author: antoine
 *
 * Created on 20 mars 2013, 20:12
 */
#include <iostream>
#include <qt4/QtCore/qobjectdefs.h>
#include <qt4/QtCore/qtextstream.h>
#include "PortConnecterChoice.h"

PortConnecterChoice::PortConnecterChoice() {
    widget.setupUi(this);
    connect(widget.buttonBox, SIGNAL(accepted()), this, SLOT(setPort()));
}

PortConnecterChoice::~PortConnecterChoice() {
}

int PortConnecterChoice::setPort() {
    std::cout<<widget.spinBox->value();
    return widget.spinBox->value();
}
