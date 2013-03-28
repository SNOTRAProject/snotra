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
    this->portSelectedDevice1 = 0;
    this->portSelectedDevice2 = 0;
    connect(widget.pushButton, SIGNAL(clicked()), this, SLOT(setInterface()));

}

PortConnecterChoice::~PortConnecterChoice() {
}

void PortConnecterChoice::setInterface() {
    setPortSelected(widget.spinBoxInterfaceDevice1->value(), widget.spinBoxInterfaceDevice2->value());

    //emit signalPortChanged();
    done(0);
}

void PortConnecterChoice::setPortSelected(int portSelectedDevice1, int portSelectedDevice2) {
    this->portSelectedDevice1 = portSelectedDevice1;
    this->portSelectedDevice2 = portSelectedDevice2;
}

void PortConnecterChoice::setText(QString Device1Name, QString Device2Name) {
    widget.textBrowserDisplayDevice1->setText("Sur quel interface de " + Device1Name + " souhaitez vous banchez ce fil ?");
    widget.textBrowserDisplayDevice2->setText("Sur quel interface de " + Device2Name + " souhaitez vous banchez ce fil ?");

}




/*void PortConnecterChoice::portChanged(){
    
}*/
