#include <cstring>
#include <iostream>

using namespace std;

struct stringy {
  char* str;
  int ct;
};

void set(stringy&, char*);
void show(const stringy&, int n = 1);
void show(const char*, int n = 1);

int main() {
  stringy beany;
  char testing[] = "Reality isn't what it used to be.";
  set(beany, testing);
  show(beany);
  show(beany, 2);
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);
  show(testing, 3);
  show("Done!");
  return 0;
}

void set(stringy& s, char* t) {
  char* tmp = new char[strlen(t) + 1];
  s.str = tmp;
  strcpy(s.str, t);  // depreciated funtion
  s.ct = strlen(t);
}

void show(const stringy& sy, int n) {
  while (n-- > 0) {
    cout << sy.str << endl;
  }
}

void show(const char* s, int n) {
  while (n-- > 0) {
    cout << s << endl;
  }
}