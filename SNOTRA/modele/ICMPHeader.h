#ifndef __ICMPHEADER_H__
#define __ICMPHEADER_H__

#include <time.h>
#include <memory>
#include "TransportHeader.h"
#include "Ip.h"

class ICMPHeader : public TransportHeader {
 public:
  ICMPHeader();
  ICMPHeader(Ip, bool = false);
  virtual ~ICMPHeader();
  Ip getSourceIp();
  void setSourceIp(Ip);
  virtual std::vector<std::string> toString();

 private:
  Ip sourceIp;

};

#endif
