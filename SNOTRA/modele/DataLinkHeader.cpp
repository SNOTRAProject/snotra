#include "DataLinkHeader.h"
#include <iostream>

DataLinkHeader::DataLinkHeader() : Header(DATALINK, true) {
}

DataLinkHeader::DataLinkHeader(Mac source_, Mac destination_, Type type_, bool isAnswer) : Header(DATALINK, isAnswer) {
  source = source_;
  destination = destination_;
  type = type_;
}

DataLinkHeader::~DataLinkHeader() {
}

Mac DataLinkHeader::getSource() {
  return source;
}

void DataLinkHeader::setSource(Mac mac) {
  source = mac;
}

Mac DataLinkHeader::getDestination() {
  return destination;
}

void DataLinkHeader::setDestination(Mac mac) {
  destination = mac;
}

Type DataLinkHeader::getType() {
  return type;
}

void DataLinkHeader::setType(Type type_) {
  type = type_;
}

std::vector<std::string> DataLinkHeader::toString() {
  std::vector<std::string> result (8, "");
  result = Header::toString();
    result.at(1) = source.toString();
    result.at(2) = destination.toString();
    std::string prot;
    switch(type) {
        case IP :
            prot = "/IP";
            break;
        case ARP:
            prot = "/ARP";
            break;
    }
    result.at(0) += prot;
    return result;
}
