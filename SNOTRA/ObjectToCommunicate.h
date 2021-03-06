/* 
 * File:   ObjectToCommunicate.h
 * Author: antoine
 *
 * Created on 10 avril 2013, 22:53
 */

#ifndef OBJECTTOCOMMUNICATE_H
#define	OBJECTTOCOMMUNICATE_H

#include <memory>
#include <list>
#include "modele/Device.h"
#include "modele/DeviceFactory.h"


class ObjectToCommunicate {
public:

   
    ObjectToCommunicate();
     /**
     * Default constructor
     * create an object to speack between graphical interface and model
     * set what a Device has to get through a QLabel
     */
    ObjectToCommunicate(QLabel*, int interfaceNumber, std::vector<std::string> interfaceName,
            std::vector<std::string> IP);
    ObjectToCommunicate(const ObjectToCommunicate& orig);
    virtual ~ObjectToCommunicate();

    int getInterfaceNumber();
    std::vector<std::string> getInterfaceIP();
    std::vector<std::string> getInterfaceName();
    void setSizeOfInterfaceNameArray(int size);
    int getSizeOfInterfaceNameArray();
    QLabel* getLabel();
    void setLabel(QLabel* label);
    std::shared_ptr<Device> getDevice();
    void connectDevice(std::shared_ptr<Device>, std::shared_ptr<Device>, int, int, int, int);
    bool isConnectedTo(std::shared_ptr<Device>) const;

private:
    QLabel *label;
    int interfaceNumber;
    std::vector<std::string> interfaceName;
    std::vector<std::string> IP;
    int sizeOfInterfaceNameArray;
    std::shared_ptr<Device> device;
    
};

#endif	/* OBJECTTOCOMMUNICATE_H */

