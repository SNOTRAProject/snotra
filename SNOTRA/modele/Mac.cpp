#include "Mac.h"

int Mac::cmpt = 0;

Mac::Mac() {
    address.push_back(104);
    address.push_back(239);
    address.push_back(189);
    address.push_back(25);
    address.push_back(cmpt / 255);
    address.push_back(cmpt % 255);
    cmpt++;
}

Mac::~Mac() {
}

Mac::Mac(std::string address_) {
  unsigned int pos = 0;
  int temp = 0;
  std::string buffer;
  std::transform(address_.begin(), address_.end(), address_.begin(), ::toupper);
  while (pos < address_.length()) {
    buffer = this->getSubstring(address_, pos);
    pos += buffer.length() + 1;
    std::istringstream iss(buffer);
    iss >> std::hex >> temp;
    address.push_back((char)temp);
  }
}

std::string Mac::getSubstring(std::string str, int pos) {
  return str.substr(pos, str.find(':', pos) - pos);
}

std::list<unsigned char> Mac::getAddress() {
  return address;
}

std::string Mac::toString() {
  std::string result;
  int first = 0, second = 0;
  for(auto& it : getAddress()) {
    first = it / 16;
    second = it % 16;
    result += toHex(first);
    result += toHex(second);
      result += ":";
  }
  result.erase(result.end() - 1);
  return result;
}

bool operator==(Mac mac1, Mac mac2) {
    return mac1.getAddress() == mac2.getAddress();
}

char Mac::toHex(int i) {
    switch(i) {
        case(0):
            return '0';
            break;
        case(1):
            return '1';
            break;
        case(2):
            return '2';
            break;
        case(3):
            return '3';
            break;
        case(4):
            return '4';
            break;
        case(5):
            return '5';
            break;
        case(6):
            return '6';
            break;
        case(7):
            return '7';
            break;
        case(8):
            return '8';
            break;
        case(9):
            return '9';
            break;
    case(10):
      return 'A';
      break;
    case(11):
      return 'B';
      break;
    case(12):
      return 'C';
      break;
    case(13):
      return 'D';
      break;
    case(14):
      return 'E';
      break;
    case(15):
      return 'F';
      break;
    default:
      return '0';
  }
}
