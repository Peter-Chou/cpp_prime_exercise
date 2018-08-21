#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

void upper_string(string&);

int main() {
  string c;
  upper_string(c);
  cout << "Bye!";
  return 0;
}

void upper_string(string& s) {
  cout << "please enter string (q to quit):\n";
  while (getline(cin, s)) {
    if (s.size() == 1 && s[0] == 'q') {
      break;
    } else {
      transform(s.begin(), s.end(), s.begin(), ::toupper);
      cout << s << endl;
      cout << "please enter another string (q to quit):\n";
    }
  }
}