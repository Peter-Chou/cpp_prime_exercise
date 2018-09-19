#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt {
 private:
  enum class Mode { POS, STN };
  static const int lbs_per_stn = 14;
  Mode mode;
  double pounds;

 public:
  Stonewt(double lbs);
  Stonewt(int stn, double lbs);
  Stonewt();
  ~Stonewt(){};
  void toPos() { mode = Mode::POS; }
  void toStn() { mode = Mode::STN; }
  // operator overloading
  Stonewt operator+(const Stonewt s) const;
  Stonewt operator-(const Stonewt s) const;
  Stonewt operator*(const double i) const;
  // friend function
  friend Stonewt operator*(const double i, const Stonewt& s) { return s * i; }
  friend std::ostream& operator<<(std::ostream&, const Stonewt& st);
};

#endif  // ! STONEWT_H_