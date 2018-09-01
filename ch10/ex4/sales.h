#ifndef SALES_H_
#define SALES_H_

namespace SALES {
class Sales {
 private:
  static const int QUARTERS = 4;
  double sales[QUARTERS];
  double average;
  double max;
  double min;

 public:
  Sales();
  Sales(const double* ar, int);
  void show() const;
};
}  // namespace SALES
#endif  // ! SALES_H_