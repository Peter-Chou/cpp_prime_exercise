// store string using c-string
#include <iostream>
#include <string>

int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  std::string first_name, last_name, full_name;
  cout << "Enter your first name: ";
  std::getline(cin, first_name);
  cout << "Enter your last name: ";
  std::getline(cin, last_name);
  full_name = first_name + ", " + last_name;
  cout << "Here is the information in a single string: " << full_name << endl;
  cin.get();
  return 0;
}