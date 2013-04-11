#ifndef __IP_H__
#define __IP_H__

#include <list>
#include <string>
#include <sstream>
#include <algorithm>
#include "Mask.h"

class Ip {
public:
    Ip();
    Ip(std::string, int);
    virtual ~Ip();
    std::list<unsigned char> getAddress() const;
    void addCharToAddress(unsigned char);
    Mask getMask() const;
    void setMask(Mask);
    std::string toString() const;
    std::string toStringFull() const;
    std::list<unsigned char> getNetwork() const;
    bool operator==(const Ip&) const;
    bool operator<(const Ip&) const;

protected:
    std::string getSubstring(std::string, int);

private:
    std::list<unsigned char> address;
    Mask mask;

};

#endif
