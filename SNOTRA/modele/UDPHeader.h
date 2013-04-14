#ifndef __UDPHEADER_H__
#define __UDPHEADER_H__

#include "TransportHeader.h"
#include <sstream>

class UDPHeader : public TransportHeader {
 public:
  UDPHeader();
  UDPHeader(int, int, bool);
  virtual ~UDPHeader();
  int getSourcePort();
  void setSourcePort(int);
  int getDestinationPort();
  void setDestinationPort(int);
  virtual std::vector<std::string> toString();

 private:
  int sourcePort;
  int destinationPort;

};

#endif
