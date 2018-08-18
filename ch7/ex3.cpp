// pass parameters by value / address to the function
#include <iostream>
#include <string>

using namespace std;

struct box {
  string maker;
  float height;
  float width;
  float length;
  float volume;
};

void show_box(box b);
void set_volume(box* b);

int main() {
  box b1 = {"box1", 1.2f, 0.5f, 5.0f};
  set_volume(&b1);
  show_box(b1);
  cin.get();
  return 0;
}

void set_volume(box* b) { b->volume = b->height * b->width * b->length; }

void show_box(box b) {
  cout << "member height: " << b.height << endl;
  cout << "member width: " << b.width << endl;
  cout << "member length: " << b.length << endl;
  cout << "member volume: " << b.volume << endl;
}