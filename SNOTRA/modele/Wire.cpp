#include "Wire.h"
#include "Device.h"

Wire::Wire() {
}

Wire::Wire(std::shared_ptr<Device> head_, int headInterface_, int headPort_) {
  head = head_;
  headInterface = headInterface_;
  headPort = headPort_;
}

Wire::~Wire() {
}

std::shared_ptr<Device> Wire::getHead() const{
  return head;
}

void Wire::setHead(std::shared_ptr<Device> device) {
  head = device;
}

int Wire::getHeadInterface() const {
  return headInterface;
}

void Wire::setHeadInterface(int headInterface_) {
  headInterface = headInterface_;
}

int Wire::getHeadPort() const{
  return headPort;
}

void Wire::setHeadPort(int headPort_) {
  headPort = headPort_;
}

void Wire::sendFrame(std::shared_ptr<Frame> frame) {
  head->receiveFrame(frame, headInterface, headPort);
}
