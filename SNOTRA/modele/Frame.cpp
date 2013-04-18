#include "Frame.h"
#include <QDebug>

Frame::Frame() {
}

Frame::Frame(std::shared_ptr<Frame> frame, std::shared_ptr<Header> header_, int interfaceId_, int portId_) {
  data = frame;
  header = header_;
  interfaceId = interfaceId_;
  portId = portId_;
}

Frame::~Frame() {
}

std::shared_ptr<Header> Frame::getHeader() const {
  return header;
}

void Frame::setHeader(std::shared_ptr<Header> header_) {
  header = header_;
}

std::shared_ptr<Frame> Frame::getData() const {
  return data;
}

void Frame::setData(std::shared_ptr<Frame> frame) {
  data = frame;
}

int Frame::getInterfaceId() const {
  return interfaceId;
}

void Frame::setInterfaceId(int interfaceId_) {
  interfaceId = interfaceId_;
}

int Frame::getPortId() const {
  return portId;
}

void Frame::setPortId(int portId_) {
  portId = portId_;
}

std::string Frame::toString() {
    std::string result;
    for(auto& it : toListString()) {
        result += it;
        result += ";";
    }
    return result;
}

std::vector<std::string> Frame::toListString() {
    std::vector<std::string> result(8, "");
    if(data != (std::shared_ptr<Frame>)0) {
        result = data->toListString();
    }
    int i = 0;
    for(auto& it : header->toString()) {
            result.at(i) += it;
            i++;
    }
    return result;
}
