// store string using c-string
#include <cstring>
#include <iostream>

const int LIMIT = 20;
const int FULL_LIMIT = 45;

int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  // char* fn_pt;
  // char* ln_pt;
  // char* full_pt;
  char first_name[LIMIT];
  char last_name[LIMIT];
  char full_name[FULL_LIMIT];
  cout << "Enter your first name: ";
  cin.get(first_name, LIMIT);
  cin.get();
  cout << "Enter your last name: ";
  cin.get(last_name, LIMIT);
  std::strcpy(full_name, first_name);
  std::strcat(full_name, ", ");
  std::strcat(full_name, last_name);
  cout << "Here is the information in a single string: " << full_name << endl;
  cin.get();
  return 0;
}