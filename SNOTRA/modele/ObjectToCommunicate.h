/* 
 * File:   ObjectToCommunicate.h
 * Author: antoine
 *
 * Created on 10 avril 2013, 22:53
 */

#ifndef OBJECTTOCOMMUNICATE_H
#define	OBJECTTOCOMMUNICATE_H

#include "Device.h"


class ObjectToCommunicate {
public:
    ObjectToCommunicate();
    ObjectToCommunicate(const ObjectToCommunicate& orig);
    virtual ~ObjectToCommunicate();
     
private:
    Device *device;

};

#endif	/* OBJECTTOCOMMUNICATE_H */

