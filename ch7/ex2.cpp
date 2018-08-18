#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int ArrLen = 10;
string num_suffix(int i);

int main() {
  vector<double> scores(ArrLen);
  double total = 0;
  for (int i = 0; i < ArrLen; i++) {
    cout << "enter the " << (i + 1) << num_suffix(i + 1) << " score: ";
    cin >> scores[i];
  }
  for (int i = 0; i < scores.size(); i++) {
    cout << "score " << (i + 1) << ": " << scores[i] << endl;
    total += scores[i];
  }
  cout << "average: " << total / scores.size() << endl;
  cin.get();
  return 0;
}

string num_suffix(int i) {
  if (i == 1) {
    return "st";
  } else if (i == 2) {
    return "nd";
  } else {
    return "th";
  }
}