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
    this->portSelected = 0;
    connect(widget.pushButton, SIGNAL(clicked()), this, SLOT(setInterface()));
    
}

PortConnecterChoice::~PortConnecterChoice() {
}

void PortConnecterChoice::setInterface(){
    setPortSelected(widget.spinBox->value());
    //emit signalPortChanged();
    done(0);
}

void PortConnecterChoice::setPortSelected(int portSelected){
    this->portSelected = portSelected;
}

/*void PortConnecterChoice::portChanged(){
    
}*/
