#ifndef __ROUTINGTABLE_H__
#define __ROUTINGTABLE_H__

#include <map>
#include <memory>
#include "Ip.h"
#include "NetworkInterface.h"

class RoutingTable {
 public:
  RoutingTable();
  virtual ~RoutingTable();
  std::map<Ip, std::pair<Ip, int>> getAllLines();
  void resetRoutingTable();
  std::pair<Ip, int> getLineByIp(Ip);
  void addLine(Ip, Ip, int);
  void removeLine(Ip);

 private:
  std::map<Ip, std::pair<Ip, int>> routingTable;

};

#endif
