#include <cctype>
#include <iostream>

using namespace std;

int main() {
  char ch;
  cout << "please enter a sentence (type @ to quit): \n";
  cin.get(ch);
  while (ch != '@') {
    if (!isdigit(ch)) {
      ch = isupper(ch) ? tolower(ch) : toupper(ch);
      cout << ch;
    }
    cin.get(ch);
  }
  cout << endl;
  cin.get();
  cin.get();
  return 0;
}