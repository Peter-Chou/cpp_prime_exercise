#include <string>

#ifndef GOLF_H_
#define GOLF_H_

class Golf {
 private:
  std::string fullname;
  int handicap;

 public:
  Golf();
  Golf(const char* name, int hc);
  Golf(const std::string name, int hc);
  void set_handicap(int hc);
  void show() const;
};

#endif  // ! GOLF_H_