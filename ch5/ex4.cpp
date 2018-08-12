// simple interest and compound interest
#include <iostream>

using namespace std;

int main() {
  double INITIAL = 100;
  double s_rate = 0.1;
  double c_rate = 0.05;
  double s_total, c_total;
  int i = 1;
  s_total = INITIAL * (1 + s_rate);
  c_total = INITIAL * (1 + c_rate);
  while (s_total >= c_total) {
    s_total = s_total + INITIAL * s_rate;
    c_total = c_total * (1 + c_rate);
    i++;
  }
  cout << "After " << i << " years: " << endl
       << "Cleo: $ " << c_total << endl
       << "Daphne: $ " << s_total << endl;
  cin.get();
  return 0;
}
