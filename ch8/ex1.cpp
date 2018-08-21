#include <iostream>

using namespace std;

void print_string(char*, int n = 0);

int main() {
  char output[20] = "hello world";
  unsigned times = 5;
  print_string(output, times);
  // print_string(output);
  cin.get();
  return 0;
}

void print_string(char* s, int n) {
  if (--n > 0) {
    print_string(s, n);
  }
  cout << s << endl;
}