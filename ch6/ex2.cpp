#include <array>
#include <iostream>
#include <string>

using namespace std;

const int LIMIT = 10;

string order[LIMIT] = {"first", "second",  "third",  "fourth", "fifth",
                       "sixth", "seventh", "eighth", "ninth",  "tenth"};

int main() {
  array<double, LIMIT> arr;
  double total = 0.0, avg;
  int supper_count = 0;
  for (int i = 0; i < LIMIT; i++) {
    cout << "please enter the " << order[i] << " donation (double type) : ";
    while (!(cin >> arr[i])) {
      cin.clear();
      while (cin.get() != '\n') {  // clear the input stream
        continue;
      }
      cout << "Donation must be double type, please enter again.\n";
    }
    total += arr[i];
  }
  avg = total / LIMIT;
  for (int i = 0; i < LIMIT; i++) {
    if (arr[i] > avg) {
      supper_count++;
    }
  }
  cout << "The average of the donations: $ " << avg << endl;
  cout << "There are " << supper_count << " numbers larger than the average.\n";
  cin.get();
  return 0;
}