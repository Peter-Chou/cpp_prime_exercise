// ex1.cpp -- calculate harmonic mean
#include <iostream>

using namespace std;

double harmonic_mean(const double x, const double y);

int main() {
  double x, y, res;
  cout << "Please enter two numbers (neither should be 0):\n";
  while (cin >> x >> y && x != 0 && y != 0) {
    cout << "the harmonic mean of " << x << " and " << y
         << " is :" << harmonic_mean(x, y) << endl
         << endl;
    cout << "Please enter another two numbers (neither should be 0):\n";
  }
  cout << "one of the numbers is 0, program terminate.";
  cin.get();
  return 0;
}

double harmonic_mean(const double x, const double y) {
  return 2.0 * x * y / (x + y);
}