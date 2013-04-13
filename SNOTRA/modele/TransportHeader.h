#ifndef __TRANSPORTHEADER_H__
#define __TRANSPORTHEADER_H__

#include "Header.h"
#include "enum.h"

class TransportHeader : public Header {
 public:
  TransportHeader();
  TransportHeader(bool);
  virtual ~TransportHeader();
  virtual std::vector<std::string> toString();

 private:

};

#endif
