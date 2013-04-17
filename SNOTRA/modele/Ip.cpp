#include "Ip.h"

Ip::Ip() {
}

Ip::~Ip() {
}

Ip::Ip(std::string address_, int mask_) {
    unsigned int pos = 0;
    int temp = 0;
    std::string buffer;
    std::transform(address_.begin(), address_.end(), address_.begin(), ::toupper);
    while (pos < address_.length()) {
        buffer = this->getSubstring(address_, pos);
        pos += buffer.length() + 1;
        std::istringstream iss(buffer);
        iss >> temp;
        address.push_back((char)temp);
    }
    setMask(Mask(mask_));
}

std::list<unsigned char> Ip::getAddress() const {
    return address;
}

std::string Ip::getSubstring(std::string str, int pos) {
    return str.substr(pos, str.find('.', pos) - pos);
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
    return other.getAddress() == address;
//    for(auto& it1 : address, it2 : other.getAddress()) {
//        if (*it1 != *it2) {
//            return false;
//        }
//    }
//    return true;
}

bool Ip::operator<(const Ip& other) const {
    for (std::list<unsigned char>::const_iterator it1 = address.begin(), it2 = other.getAddress().begin(); it1 != address.end(), it2 != other.getAddress().end(); it1++, it2++) {
        if (*it1 != *it2) {
            return *it1 < *it2;
        }
    }
    return true;
}

std::string Ip::toString() const {
    std::string result;
    for (auto& it : getAddress()) {
        result += std::to_string(it);
            result += '.';
    }
    result.erase(result.end() - 1);
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

