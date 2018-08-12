
#include <iostream>
#include <string>

using namespace std;

const string months[12] = {"January",   "February", "March",    "April",
                           "May",       "June",     "July",     "August",
                           "September", "October",  "November", "December"};

int main() {
  int sales[12][3];
  int first_total, second_total, third_total;

  for (int i = 0; i < 12; i++) {
    cout << "Please enter three years sales of " << months[i] << ": ";
    cin >> sales[i][0] >> sales[i][1] >> sales[i][2];
    first_total += sales[i][0];
    second_total += sales[i][1];
    third_total += sales[i][2];
  }
  cout << "First year sales: " << first_total << endl;
  cout << "Second year sales: " << second_total << endl;
  cout << "Third year sales: " << third_total << endl;
  cout << "total sales of three years: "
       << first_total + second_total + third_total << endl;
  cin.get();
  return 0;
}