#include <iostream>
#include <algorithm>

using std::cin;

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < N; ++i) {
    int scores[5];

    for (int &score : scores) {
      cin >> score;
    }

    std::sort(scores, scores + 5);

    int negotiation_threshold = scores[3] - scores[1];
    if (negotiation_threshold >= 4) {
      std::cout << "KIN\n";
    } else {
      int normalized_score = scores[1] + scores[2] + scores[3];
      std::cout << normalized_score << '\n';
    }
  }

  return 0;
}
