#include "ARPTable.h"

ARPTable::ARPTable() {
}

ARPTable::~ARPTable() {
}

std::map<Ip, Mac> ARPTable::getAllLines() {
  return arpTable;
}

void ARPTable::resetARPTable() {
  arpTable.clear();
}

Mac ARPTable::getMacByIp(Ip ip) {
        std::map<Ip, Mac>::iterator it = arpTable.find(ip);
        if(it != arpTable.end()) {
            return it->second;
        }
        return Mac("00:00:00:00:00:00");
}

void ARPTable::addLine(Ip ip, Mac mac) {
  arpTable.insert(std::pair<Ip, Mac>(ip, mac));
}

void ARPTable::checkForDeletion() {
  for(auto& it : arpTable) {
    //TODO : test the ttl and delete the Mac if it expired
  }
}

void ARPTable::removeLine(Ip ip) {
  arpTable.erase(ip);
}
