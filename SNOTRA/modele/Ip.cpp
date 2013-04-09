#include "Ip.h"

Ip::Ip() {
}

Ip::Ip(std::string address_, int mask_) {
    unsigned int pos = 0;
    int temp;
    std::string buffer;
    std::transform(address_.begin(), address_.end(), address_.begin(), ::toupper);
    while (pos < address_.length()) {
        buffer = this->getSubstring(address_, pos);
        pos += buffer.length() + 1;
        std::istringstream iss(buffer);
        iss >> temp;
        Ip::addCharToAddress((char) temp);
    }
    setMask(Mask(mask_));
}

Ip::~Ip() {
}

std::list<unsigned char> Ip::getAddress() const {
    return address;
}

void Ip::addCharToAddress(unsigned char chr) {
    address.push_back(chr);
}

Mask Ip::getMask() const {
    return mask;
}

void Ip::setMask(Mask mask_) {
    mask = mask_;
}

bool Ip::operator==(const Ip& other) const {
    for (std::list<unsigned char>::const_iterator it1 = address.begin(), it2 = other.getAddress().begin(); it1 != address.end(), it2 != other.getAddress().end(); it1++, it2++) {
        if (*it1 != *it2) {
            return false;
        }
    }
    return true;
}

bool Ip::operator<(const Ip& other) const {
    for (std::list<unsigned char>::const_iterator it1 = address.begin(), it2 = other.getAddress().begin(); it1 != address.end(), it2 != other.getAddress().end(); it1++, it2++) {
        if (*it1 != *it2) {
            return *it1 < *it2;
        }
    }
    return true;
}

std::string Ip::getSubstring(std::string str, int pos) {
    return str.substr(pos, str.find('.', pos) - pos);
}

std::string Ip::toString() const {
    std::string result;
    for (std::list<unsigned char>::iterator it = getAddress().begin(); it != getAddress().end();) {
        result += (int) *it;
        it++;
        if (it != getAddress().end()) {
            result += '.';
        }
    }
    return result;
}

std::string Ip::toStringFull() const {
    return toString() + '/' + getMask().toString();
}

std::list<unsigned char> Ip::getNetwork() const {
    std::list<unsigned char> result;
    int i = 0;
    for (std::list<unsigned char>::iterator it = getAddress().begin(); it != getAddress().end(); it++, i++) {
        result.push_back(*it & getMask().getCharInPosition(i));
    }
    return result;
}

