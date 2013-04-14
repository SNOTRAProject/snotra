#include "NetworkHeader.h"

NetworkHeader::NetworkHeader() : Header(NETWORK, true) {
}

NetworkHeader::NetworkHeader(Ip source_, Ip destination_, int ttl, Protocole protocole_, bool isAnswer) : Header(NETWORK, isAnswer) {
  source = source_;
  destination = destination_;
  timeToLive = ttl;
  protocole = protocole_;
}

NetworkHeader::~NetworkHeader() {
}

Ip NetworkHeader::getSource() {
  return source;
}

void NetworkHeader::setSource(Ip ip) {
  source = ip;
}

Ip NetworkHeader::getDestination() {
  return destination;
}

void NetworkHeader::setDestination(Ip ip) {
  source = ip;
}

int NetworkHeader::getTimeToLive() {
  return timeToLive;
}

void NetworkHeader::decreaseTimeToLive() {
  timeToLive--;
}

void NetworkHeader::setTimeToLive(int ttl) {
  timeToLive = ttl;
}

Protocole NetworkHeader::getProtocole() {
  return protocole;
}

void NetworkHeader::setProtocole(Protocole protocole_) {
  protocole = protocole_;
}

std::vector<std::string> NetworkHeader::toString() {
    std::vector<std::string> result (8, "");
    result = Header::toString();
    result.at(3) = source.toStringFull();
    result.at(4) = destination.toStringFull();
    std::string prot;
    switch(protocole) {
        case UDP :
            prot = "/UDP";
            break;
        case TCP:
            prot = "/TCP";
            break;
        case ICMP:
            prot = "/ICMP";
            break;
        case NONE:
            prot = "/ ";
            break;
    }
    result.at(0) += prot;
    return result;
}