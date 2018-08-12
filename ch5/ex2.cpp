#include <array>
#include <iostream>

using namespace std;

const int length = 100;

int main() {
  array<long double, length> factorials;
  factorials[1] = factorials[0] = 1.0L;
  for (int i = 2; i <= length; i++) {
    factorials[i] = i * factorials[i - 1];
  }
  cout << "The value of " << length << " is: " << factorials[length] << endl;
  cin.get();
  return 0;
}