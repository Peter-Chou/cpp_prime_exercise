#ifndef PLORG_H_
#define PLORG_H_
#include <string>

class Plorg {
 private:
  std::string name;
  int ci;

 public:
  Plorg(int c = 50, const char* n = "Plorga") {
    name = n;
    ci = c;
  }
  void report();
  void ci_set(int c);
};

#endif  // ! PLORG_H_