// show pct
#include <iostream>

int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  long long world, usa;
  double pct;
  cout << "Enter the world's population: ";
  cin >> world;
  cout << "Enter the usa's population: ";
  cin >> usa;
  cout << "The population of the US is "
       << 100 * static_cast<double>(usa) / world << "% of the world population."
       << endl;
  cin.get();
  return 0;
}