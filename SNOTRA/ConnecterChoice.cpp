/*
 * File:   ConnecterChoice.cpp
 * Author: antoine
 *
 * Created on 10 avril 2013, 18:19
 */

#include "ConnecterChoice.h"

ConnecterChoice::ConnecterChoice() {
    widget.setupUi(this);
    this->portSelectedDevice1 = 0;
    this->portSelectedDevice2 = 0;
    connect(widget.pushButton, SIGNAL(clicked()), this, SLOT(setInterface()));
}

ConnecterChoice::~ConnecterChoice() {
}

/**
 * set the Interface choose in the spinbox
 */
void ConnecterChoice::setInterface() {
    setPortSelected(widget.spinBoxDevide1Port->value(),
            widget.spinBoxDevice2Port->value());
    done(0);
}

/**
 * record the port selected in the two parameter
 * @param portSelectedDevice1
 * @param portSelectedDevice2
 */
void ConnecterChoice::setPortSelected(int portSelectedDevice1,
        int portSelectedDevice2) {
    this->portSelectedDevice1 = portSelectedDevice1;
    this->portSelectedDevice2 = portSelectedDevice2;
}

/**
 * adapt the text according to item selected
 * @param Device1Name
 * @param Device2Name
 */
void ConnecterChoice::setText(QString Device1Name, QString Device2Name) {
    widget.textBrowserDevice1Interface->setText("Sur quel interface du "
            + Device1Name + " souhaitez vous bancher ce fil ?");
    widget.textBrowserDevice2Interface->setText("Sur quel interface du "
            + Device2Name + " souhaitez vous bancher ce fil ?");
}

int ConnecterChoice::getPortDevice1(){
    return portSelectedDevice1;
}
int ConnecterChoice::getPortDevice2(){
    return portSelectedDevice2;
}

std::string ConnecterChoice::getInterfaceName1() {
    return widget.comboBoxChoiceInterfaceDevice1->currentText().toStdString();
}

std::string ConnecterChoice::getInterfaceName2() {
    return widget.comboBoxChoiceInterfaceDevice2->currentText().toStdString();
}