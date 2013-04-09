#ifndef __ICMPHEADER_H__
#define __ICMPHEADER_H__

#include <time.h>
#include <memory>
#include "TransportHeader.h"
#include "Ip.h"

class ICMPHeader : public TransportHeader {
 public:
  ICMPHeader();
  ICMPHeader(Ip, bool);
  virtual ~ICMPHeader();
  Ip getSourceIp();
  void setSourceIp(Ip);

 private:
  Ip sourceIp;

};

#endif
