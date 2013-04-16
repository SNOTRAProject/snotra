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

ObjectToCommunicate::ObjectToCommunicate(QLabel* label_, int interfaceNumber,
        std::vector<std::string> interfaceName, std::vector<std::string> IP) {
    label = label_;
    device = DeviceFactory::createDevice(label->objectName().toStdString(),
            interfaceNumber, interfaceName, IP);
    this->interfaceName = interfaceName;
    this->IP = IP;
    this->interfaceNumber = interfaceNumber;
    
    //wireShark = new WireShark();
}

ObjectToCommunicate::ObjectToCommunicate(const ObjectToCommunicate& orig) {
}

ObjectToCommunicate::~ObjectToCommunicate() {
}

std::vector<std::string> ObjectToCommunicate::getInterfaceIP() {
    return IP;
}

//WireShark ObjectToCommunicate::getWireshark(){
//    return wireShark;
//}
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

std::shared_ptr<Device> ObjectToCommunicate::getDevice() {
    return device;
}

void ObjectToCommunicate::connectDevice(std::shared_ptr<Device> item1,
        std::shared_ptr<Device> item2, int intId1, int portId1, int intId2,
        int portId2) {
    item1->connectNeighbour(item2, intId1, portId1, intId2, portId2);
}

bool ObjectToCommunicate::isConnectedTo(std::shared_ptr<Device> other) const {
    return this->device->isConnectedTo(other);
}