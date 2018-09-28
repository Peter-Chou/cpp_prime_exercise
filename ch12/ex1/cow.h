#ifndef COW_H_
#define COW_H_
#include <string>

class Cow {
 private:
  std::string name;
  std::string hobby;
  double weight;

 public:
  Cow();
  Cow(const char* nm, const char* ho, double wt);
  Cow(const Cow& c);
  ~Cow() {}
  Cow& operator=(const Cow& c);
  void ShowCow() const;  // display all cow data
};

#endif  // ! COW_H_