#include <iostream>

using namespace std;

long long factorial(unsigned int i);

int main() {
  long num;
  cout << "enter the number of the factorial (q to quit): ";
  while (cin >> num) {
    while (num < 0) {
      cout << "number must be positive, please re-enter: ";
      cin >> num;
    }
    cout << "factorial of " << num << " is: " << factorial(num) << endl << endl;
    cout << "enter the number of the factorial (q to quit): ";
  }
  cout << "Bye!";
  cin.get();
  return 0;
}

long long factorial(unsigned int i) {
  if (i == 0 || i == 1) {
    return 1;
  } else {
    return i * factorial(i - 1);
  }
}