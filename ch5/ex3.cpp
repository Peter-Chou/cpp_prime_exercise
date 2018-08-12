#include <iostream>

using namespace std;

int main() {
  double i, total;
  cout << "please enter a number (0 to quit) : ";
  while ((cin >> i) && static_cast<int>(i) != 0) {
    total += i;
    cout << "please enter a number (0 to quit) : ";
  }
  cout << "total is: " << total << endl;
  cin.get();
  return 0;
}