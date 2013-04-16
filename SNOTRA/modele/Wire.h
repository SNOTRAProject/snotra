#ifndef __WIRE_H__
#define __WIRE_H__

#include <memory>
#include "Frame.h"
#include "Device.h"

class Device;
class Frame;

class Wire {
 public:
  Wire();
  Wire(std::shared_ptr<Device>, int, int);
  virtual ~Wire();
  std::shared_ptr<Device> getHead() const;
  void setHead(std::shared_ptr<Device>);
  int getHeadInterface() const;
  void setHeadInterface(int);
  int getHeadPort() const;
  void setHeadPort(int);

  void sendFrame(std::shared_ptr<Frame>);

 private:
  std::shared_ptr<Device> head;
  int headInterface;
  int headPort;

};

#endif
