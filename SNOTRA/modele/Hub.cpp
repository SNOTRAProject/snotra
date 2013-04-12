#include "Hub.h"

Hub::Hub() {
}

Hub::Hub(int numberOfInterface, std::vector<std::string> names, std::vector<std::string> ip) : Device(numberOfInterface, names, ip) {
}

Hub::~Hub() {
}

void Hub::receiveFrame(std::shared_ptr<Frame> frame, int interfaceId, int portId) {
  Device::receiveFrame(frame, interfaceId, portId);
  sendFrame(frame);
}

void Hub::sendFrame(std::shared_ptr<Frame> frame) {
  Device::sendFrameBroadcast(frame);
}
