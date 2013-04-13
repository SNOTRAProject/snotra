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

    /**
     * create an object to speack betwen graphical interface and model
     */
    ObjectToCommunicate();
    ObjectToCommunicate(int interfaceNumber, std::vector<std::string> interfaceName,
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


private:
    QLabel *label;
    int interfaceNumber;
    std::vector<std::string> interfaceName;
    std::vector<std::string> IP;
    int sizeOfInterfaceNameArray;
};

#endif	/* OBJECTTOCOMMUNICATE_H */

