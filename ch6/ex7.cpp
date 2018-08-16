#include <cctype>
#include <iostream>
#include <string>

using namespace std;

bool is_word(const string& w);

int main() {
  string word;
  int v_count = 0, c_count = 0, o_count = 0;
  cout << "Enter words (q to quit):\n";
  while (cin >> word && word[0] != 'q') {
    if (is_word(word)) {
      switch (word[0]) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
          v_count++;
          break;
        default:
          c_count++;
      }
    } else {
      o_count++;
    }
  }
  cout << v_count << " words beginning with vowels\n"
       << c_count << " words beginning with constants\n"
       << o_count << " others\n";
  cin.get();
  return 0;
}

bool is_word(const string& w) {
  for (int i = 0; i < w.size(); i++) {
    if (!isalpha(w[i])) {
      return false;
    }
  }
  return true;
}