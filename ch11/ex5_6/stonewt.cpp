#include "stonewt.h"

Stonewt::Stonewt(double lbs) {
  mode = Mode::POS;
  pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs) {
  mode = Mode::STN;
  pounds = stn * lbs_per_stn + lbs;
}
Stonewt::Stonewt() {
  mode = Mode::POS;
  pounds = 0.0;
}

Stonewt Stonewt::operator+(const Stonewt& s) const {
  Stonewt temp;
  temp.pounds = pounds + s.pounds;
  return temp;
}

Stonewt Stonewt::operator-(const Stonewt& s) const {
  Stonewt temp;
  temp.pounds = pounds - s.pounds;
  return temp;
}

Stonewt Stonewt::operator*(const double i) const {
  Stonewt temp;
  temp.pounds = pounds * i;
  return temp;
}

std::ostream& operator<<(std::ostream& os, const Stonewt& s) {
  if (s.mode == Stonewt::Mode::POS) {
    os << "pounds: " << s.pounds;
  } else {
    os << "stone: " << static_cast<int>(s.pounds) / Stonewt::lbs_per_stn
       << "\tpounds left: " << s.pounds - static_cast<int>(s.pounds);
  }
  return os;
}