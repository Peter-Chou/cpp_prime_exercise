#include <array>
#include <iostream>

int main() {
  using namespace std;
  array<int, 3> scores;
  double avg;
  for (int i = 0; i < 3; i++) {
    cout << "scores: ";
    cin >> scores[i];
    cout << endl;
  }
  avg = (scores[0] + scores[1] + scores[2]) / 3.0;
  cout << "Average score: " << avg << endl;
  cin.get();
  return 0;
}