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
