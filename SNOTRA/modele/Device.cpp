#include "Device.h"
#include "Frame.h"
#include <qt4/QtCore/qdebug.h>
Device::Device() {
}

Device::Device(int numberOfInterface, std::vector<std::string> names, std::vector<std::string> ip) {
    for(int i = 0; i < numberOfInterface; i++) {
        qDebug() << names.at(i).c_str();
        addNetworkInterface(names.at(i), Mac(), Ip(ip.at(i), 24), true);
    }
}

Device::~Device() {
}

std::list<std::shared_ptr<Frame>> Device::getAllFrameHistory() const{
  return frameHistory;
}

std::vector<NetworkInterface> Device::getNetworkInterfaces() const {
  return networkInterfaces;
}

int Device::getNetworkInterfaceIdByName(std::string name) const {
    int i = 0;
    for (auto& it : networkInterfaces) {
        if(!it.getName().compare(name)) {
            return i;
        }
        i++;
    }
    return -1;
}

void Device::addNetworkInterface(std::string name, Mac mac, Ip ip, bool isUp) {
  networkInterfaces.push_back(NetworkInterface(name, mac, ip, isUp));
}

void Device::addFrameToHistory(std::shared_ptr<Frame> frame) {
  frameHistory.push_back(frame);
}

void Device::sendFrameBroadcast(std::shared_ptr<Frame> frame) {
  for(int i = 0; i < networkInterfaces.size(); i++) {
    for(int j = 0; j < networkInterfaces.at(i).getNumberOfWires(); j++) {
	sendFrameUnicast(frame, i, j);
    }
  }
}

void Device::sendFrameUnicast(std::shared_ptr<Frame> frame, int interfaceId, int portId) {
  frame->setInterfaceId(interfaceId);
  frame->setPortId(portId);
  addFrameToHistory(frame);
  networkInterfaces.at(interfaceId).sendFrame(frame, portId);
}

void Device::receiveFrame(std::shared_ptr<Frame> frame, int interfaceId, int portId) {
  frame->setInterfaceId(interfaceId);
  frame->setPortId(portId);
  qDebug() << frame->toString().c_str();
  addFrameToHistory(frame);
}

std::shared_ptr<Frame> Device::giveFrameToInterface(std::shared_ptr<Frame> frame, int interfaceId) {
  return networkInterfaces.at(interfaceId).receiveFrame(frame);
}

void Device::connectNeighbour(std::shared_ptr<Device> neighbour, int thisInterfaceId, int thisPortId, int neighbourInterfaceId, int neighbourPortId, bool isContinue) {
  networkInterfaces.at(thisInterfaceId).connectWire(Wire(neighbour, neighbourInterfaceId, neighbourPortId));
  if(isContinue) {
      neighbour->connectNeighbour(std::shared_ptr<Device>(this), neighbourInterfaceId, neighbourPortId, thisInterfaceId, thisPortId, false);
  }
}

void Device::disconnectNeighbour(int interfaceId) {
  networkInterfaces.erase(networkInterfaces.begin() + interfaceId);
}

void Device::activateNetworkInterface(int interfaceId) {
  networkInterfaces.at(interfaceId).setIsUp(true);
}

void Device::desactivateNetworkInterface(int interfaceId) {
  networkInterfaces.at(interfaceId).setIsUp(false);
}

bool Device::isConnectedTo(std::shared_ptr<Device> device) const {
    for(auto& it : networkInterfaces) {
        for(auto& it2 : it.getWire()) {
            if(it2.getHead() == device) {
                return true;
            }
        }
    }
    return false;
}