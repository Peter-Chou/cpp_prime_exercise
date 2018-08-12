#include <iostream>
#include <string>

using namespace std;

const string months[12] = {"January",   "February", "March",    "April",
                           "May",       "June",     "July",     "August",
                           "September", "October",  "November", "December"};

int main() {
  int sales[12];
  int total = 0;
  for (int i = 0; i < 12; i++) {
    cout << "Please enter the sales of " << months[i] << ": ";
    cin >> sales[i];
    total += sales[i];
  }
  cout << "Total sales of the Year: " << total << endl;
  cin.get();
  return 0;
}