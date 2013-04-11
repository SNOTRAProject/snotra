/* 
 * File:   ObjectToCommunicate.h
 * Author: antoine
 *
 * Created on 10 avril 2013, 22:53
 */

#ifndef OBJECTTOCOMMUNICATE_H
#define	OBJECTTOCOMMUNICATE_H

#include "modele/Device.h"

class ObjectToCommunicate {
public:
    ObjectToCommunicate();
    ObjectToCommunicate(int interfaceNumber, std::string *interfaceName,
            std::string *IP);
    ObjectToCommunicate(const ObjectToCommunicate& orig);
    virtual ~ObjectToCommunicate();

    int getInterfaceNumber();
    std::string* getInterfaceIP();
    std::string* getInterfaceName();
    void setSizeOfInterfaceNameArray(int size);
    int getSizeOfInterfaceNameArray();

private:
    int interfaceNumber;
    std::string *interfaceName;
    std::string *IP;
    int sizeOfInterfaceNameArray;
};

#endif	/* OBJECTTOCOMMUNICATE_H */

