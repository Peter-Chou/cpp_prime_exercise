#include <iostream>
#include <string>

using namespace std;

int main() {
  int rows;
  cout << "enter a value for the number of rows to display: ";
  cin >> rows;
  for (int i = rows - 1; i >= 0; i--) {
    for (int j = 0; j < i; j++) {
      cout << '.';
    }
    for (int j = rows - i; j > 0; j--) {
      cout << '*';
    }
    cout << endl;
  }
  cin.get();
  return 0;
}