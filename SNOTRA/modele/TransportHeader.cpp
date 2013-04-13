#include "TransportHeader.h"

TransportHeader::TransportHeader() : Header(TRANSPORT, true) {
}

TransportHeader::TransportHeader(bool isAnswer) : Header(TRANSPORT, isAnswer) {
}

TransportHeader::~TransportHeader() {
}

std::vector<std::string> TransportHeader::toString() {
    std::vector<std::string> result;
    result = Header::toString();
    return result;
}