// exercise 3_01
#include <iostream>

int main() {
  using std::cin;
  using std::cout;
  const int FEET_INCH_TRANSFER = 12;
  int inch, feet, reminder;
  cout << "please enter a inch integer: \n";
  cin >> inch;
  feet = inch / FEET_INCH_TRANSFER;
  reminder = inch % FEET_INCH_TRANSFER;
  cout << "feet: " << feet << " inch: " <<reminder << std::endl;
  cin.get();
  return 0;
}
