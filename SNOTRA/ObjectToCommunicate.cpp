/* 
 * File:   ObjectToCommunicate.cpp
 * Author: antoine
 * 
 * Created on 10 avril 2013, 22:53
 */

#include <qt4/QtGui/qlabel.h>
#include "ObjectToCommunicate.h"


ObjectToCommunicate::ObjectToCommunicate() {
}

ObjectToCommunicate::ObjectToCommunicate(int interfaceNumber,
        std::vector<std::string> interfaceName, std::vector<std::string> IP) {
    this->interfaceNumber = interfaceNumber;
    this->interfaceName = interfaceName;
    this->IP = IP;
}

ObjectToCommunicate::ObjectToCommunicate(const ObjectToCommunicate& orig) {
}

ObjectToCommunicate::~ObjectToCommunicate() {
}

std::vector<std::string> ObjectToCommunicate::getInterfaceIP() {
    return IP;
}

std::vector<std::string> ObjectToCommunicate::getInterfaceName() {
    return interfaceName;
}

int ObjectToCommunicate::getInterfaceNumber() {
    return interfaceNumber;
}

int ObjectToCommunicate::getSizeOfInterfaceNameArray() {
    return sizeOfInterfaceNameArray;
}

void ObjectToCommunicate::setSizeOfInterfaceNameArray(int size) {
    this->sizeOfInterfaceNameArray = size;
}

QLabel* ObjectToCommunicate::getLabel() {
    return label;
}

void ObjectToCommunicate::setLabel(QLabel* label) {
    this->label = label;
}