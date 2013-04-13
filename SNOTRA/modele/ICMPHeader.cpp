#include "ICMPHeader.h"

ICMPHeader::ICMPHeader() {
}

ICMPHeader::ICMPHeader(Ip ip, bool isAnswer) : TransportHeader(isAnswer) {
  sourceIp = ip;
}

ICMPHeader::~ICMPHeader() {
}

Ip ICMPHeader::getSourceIp() {
  return sourceIp;
}

void ICMPHeader::setSourceIp(Ip ip) {
  sourceIp = ip;
}

std::vector<std::string> ICMPHeader::toString() {
    std::vector<std::string> result;
    result = TransportHeader::toString();
    return result;
}