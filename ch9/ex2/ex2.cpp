#include <iostream>
#include <string>

using namespace std;

void strcount(const string s);

int main() {
  string input_str;
  cout << "enter a line:\n";
  while (getline(cin, input_str) && input_str != "") {
    strcount(input_str);
    cout << "Enter next line (empty line to quit):\n";
  }
  cout << "Bye!";
  cin.get();
  return 0;
}

void strcount(const string s) {
  static unsigned total_count = 0;
  total_count += s.size();
  cout << "\"" << s << "\" contains " << s.size() << " characters\n"
       << total_count << " characters total\n";
}