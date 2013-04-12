/* 
 * File:   DeviceFactory.h
 * Author: firekore
 *
 * Created on 12 avril 2013, 17:03
 */

#ifndef DEVICEFACTORY_H
#define	DEVICEFACTORY_H

#include <memory>
#include <vector>
#include "Device.h"
#include "Hub.h"
#include "Switch.h"
#include "DeviceN4.h"

class DeviceFactory {
public:
    DeviceFactory();
    DeviceFactory(const DeviceFactory& orig);
    virtual ~DeviceFactory();
    static std::shared_ptr<Device> createDevice(std::string, int, std::vector<std::string>, std::vector<std::string>);
private:

};

#endif	/* DEVICEFACTORY_H */

