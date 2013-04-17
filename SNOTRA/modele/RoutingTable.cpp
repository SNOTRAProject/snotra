#include "RoutingTable.h"
#include <QDebug>

RoutingTable::RoutingTable() {
}

RoutingTable::~RoutingTable() {
}

std::map<Ip, std::pair<Ip, int>> RoutingTable::getAllLines() {
  return routingTable;
}

void RoutingTable::resetRoutingTable() {
  routingTable.clear();
}

std::pair<Ip, int> RoutingTable::getLineByIp(Ip ip) {
  for(auto& it : routingTable) {
      qDebug() << it.first.toString().c_str() << ip.toString().c_str();
    if(it.first == ip) {
      return it.second;
    }
  }
  return std::pair<Ip, int>(Ip("0.0.0.0", 0), -1);
}

void RoutingTable::addLine(Ip destination, Ip gateway, int interfaceId) {
  routingTable.insert(std::pair<Ip, std::pair<Ip, int>>(destination, std::pair<Ip, int>(gateway, interfaceId)));
}

void RoutingTable::removeLine(Ip destination) {
  routingTable.erase(destination);
}
