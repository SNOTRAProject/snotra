#ifndef __HEADER_H__
#define __HEADER_H__

#include "enum.h"
#include <string>
#include <vector>

class Header {
 public:
  Header();
  Header(HeaderType, bool);
  virtual ~Header();
  HeaderType getType();
  void setType(HeaderType);
  bool getIsAnswer();
  void setIsAnswer(bool);
  virtual std::vector<std::string> toString();

 private:
  HeaderType type;
  bool isAnswer;

};

#endif
