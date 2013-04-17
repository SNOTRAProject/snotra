/* 
 * File:   DeviceFactory.cpp
 * Author: firekore
 * 
 * Created on 12 avril 2013, 17:03
 */

#include "DeviceFactory.h"

DeviceFactory::DeviceFactory() {
}

DeviceFactory::DeviceFactory(const DeviceFactory& orig) {
}

DeviceFactory::~DeviceFactory() {
}

std::shared_ptr<Device> DeviceFactory::createDevice(std::string className, int numberOfInterface, std::vector<std::string> names, std::vector<std::string> ip) {
    std::shared_ptr<Device> device;
    if(!className.compare("hub")) {
        device = std::shared_ptr<Hub>(new Hub(numberOfInterface, names, ip));
    }
    else if(!className.compare("switche")) {
        device = std::shared_ptr<Switch>(new Switch(numberOfInterface, names, ip));
    }
    else if(!className.compare("pc") || className.compare("router")) {
        device = std::shared_ptr<DeviceN4>(new DeviceN4(numberOfInterface, names, ip));
    }
    else {
        device = 0;
    }
    return device;
}