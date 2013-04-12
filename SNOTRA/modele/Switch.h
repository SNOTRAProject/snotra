#ifndef __SWITCH_H__
#define __SWITCH_H__

#include <memory>
#include <vector>
#include "Frame.h"
#include "MacTable.h"
#include "Mac.h"
#include "Device.h"
#include "DataLinkHeader.h"

#define DEFAULT_NUMBER_OF_INTERFACE 24

class Switch : public Device {
 public:
  Switch();
  Switch(int, std::vector<std::string>, std::vector<std::string>);
  virtual ~Switch();
  MacTable getMacTable() const;
  void setMacTable(MacTable);
  void receiveFrame(std::shared_ptr<Frame>, int, int);
  void sendFrame(std::shared_ptr<Frame>);

 private:
  MacTable macTable;

};

#endif
