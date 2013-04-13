#ifndef __NETWORKHEADER_H__
#define __NETWORKHEADER_H__

#include <memory>
#include "Ip.h"
#include "Header.h"
#include "enum.h"

class NetworkHeader : public Header {
 public:
  NetworkHeader();
  NetworkHeader(Ip, Ip, int, Protocole, bool);
  virtual ~NetworkHeader();
  Ip getSource();
  void setSource(Ip);
  Ip getDestination();
  void setDestination(Ip);
  int getTimeToLive();
  void decreaseTimeToLive();
  void setTimeToLive(int);
  Protocole getProtocole();
  void setProtocole(Protocole);
  virtual std::vector<std::string> toString();

 private:
  Ip source;
  Ip destination;
  int timeToLive;
  Protocole protocole;

};

#endif
