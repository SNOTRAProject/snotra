/* 
 * File:   ObjectToCommunicate.cpp
 * Author: antoine
 * 
 * Created on 10 avril 2013, 22:53
 */

#include <qt4/QtGui/qlabel.h>
#include "ObjectToCommunicate.h"

/**
 * create an object to speack betwen graphical interface and model
 */
ObjectToCommunicate::ObjectToCommunicate() {
}

ObjectToCommunicate::ObjectToCommunicate(int interfaceNumber,
        std::string *interfaceName, std::string *IP) {
    this->interfaceNumber = interfaceNumber;
    this->interfaceName = interfaceName;
    this->IP = IP;
}

ObjectToCommunicate::ObjectToCommunicate(const ObjectToCommunicate& orig) {
}

ObjectToCommunicate::~ObjectToCommunicate() {
}

std::string* ObjectToCommunicate::getInterfaceIP() {
    return IP;
}

std::string* ObjectToCommunicate::getInterfaceName() {
    return interfaceName;
}

int ObjectToCommunicate::getInterfaceNumber() {
    return interfaceNumber;
}
int ObjectToCommunicate::getSizeOfInterfaceNameArray(){
    return sizeOfInterfaceNameArray;
}
void ObjectToCommunicate::setSizeOfInterfaceNameArray(int size){
    this->sizeOfInterfaceNameArray = size;
}