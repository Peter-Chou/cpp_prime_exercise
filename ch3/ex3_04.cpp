// seconds -> days hours and seconds
#include <cmath>
#include <iostream>

const int CONVERSE = 60;

int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  long long long_secs;
  int days, hours, mins, secs;
  cout << "please enter the number of seconds: \n";
  cin >> long_secs;
  days = 24 * CONVERSE * CONVERSE;
  hours = CONVERSE * CONVERSE;
  mins = CONVERSE;
  cout << long_secs << " seconds = " << long_secs / days << " days, "
       << (long_secs % days) / hours << " hours, "
       << ((long_secs % days) % hours) / mins << " minutes, "
       << (((long_secs % days) % hours) % mins) << "seconds";
  cin.get();
  return 0;
}