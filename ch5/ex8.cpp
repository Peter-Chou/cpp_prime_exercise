#include <cstring>
#include <iostream>

using namespace std;

const int STRLEN = 50;

int main() {
  char word[STRLEN];
  int count = 0;
  cout << "Enter words (to stop, type the word done):\n";
  cin >> word;
  while (strcmp(word, "done")) {
    count++;
    cin >> word;
  }
  cout << "You entered a total of " << count << " words.\n";
  cin.get();
  return 0;
}