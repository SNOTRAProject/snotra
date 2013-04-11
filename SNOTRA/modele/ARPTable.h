#ifndef __ARPTABLE_H__
#define __ARPTABLE_H__

#include <map>
#include <memory>
#include "Mac.h"
#include "Ip.h"

class ARPTable {
 public:
  ARPTable();
  virtual ~ARPTable();
  std::map<Ip, Mac> getAllLines();
  void resetARPTable();
  Mac getMacByIp(Ip ip);
  void addLine(Ip, Mac);
  void checkForDeletion();

 private:
  std::map<Ip, Mac> arpTable;

  void removeLine(Ip);

};

#endif
