#include <iostream>
#include <string>

int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  using std::string;
  string name, dessert;
  cout << "Enter your name:\n";
  std::getline(cin, name);
  cout << "Enter your favorite dessert:\n";
  std::getline(cin, dessert);
  cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
  cin.get();
  return 0;
}