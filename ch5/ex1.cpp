// sum of a range of ints
#include <iostream>

using namespace std;

int main() {
  int start, end, total = 0;
  cout << "Please enter the start int & end int:\n";
  cin >> start >> end;
  for (int i = start; i <= end; i++) {
    total = total + i;
  }
  cout << "The total is: " << total << endl;
  cin.get();
  return 0;
}