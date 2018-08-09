#include <iostream>

const double MIN2DEG = 60;
const double SEC2DEG = 60;

int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  int deg, min, sec;
  double res;
  cout << "Enter a latitude in degrees, minutes, and seconds:\n";
  cout << "First, enter the degrees: \n";
  cin >> deg;
  cout << "Next, enter the minutes of arc: \n";
  cin >> min;
  cout << "Finally, enter the seconds of arc: \n";
  cin >> sec;
  res = deg + min / MIN2DEG + sec / SEC2DEG;
  cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = "
       << res << "degrees" << endl;
  cin.get();
  return 0;
}
