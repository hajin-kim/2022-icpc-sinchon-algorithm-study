#include <iostream>
#include <algorithm>
#include <numeric>

using std::cin, std::cout;

typedef struct {
  int order;
  int score;
} indexed_score;

int main() {
  const int N = 8;

  indexed_score scores[N];

  for (int i = 0; i < N; ++i) {
    int score;
    cin >> score;
    scores[i] = {.order = i + 1, .score = score};
  }

  std::stable_sort(
      scores,
      scores + N,
      [](indexed_score l, indexed_score r) -> bool { return l.score < r.score; }
  );

  cout << std::accumulate(
      scores + (N - 5),
      scores + N,
      0,
      [](int z, indexed_score a) -> int { return z + a.score; }
  ) << '\n';

  std::sort(
      scores + (N - 5),
      scores + N,
      [](indexed_score l, indexed_score r) -> bool { return l.order < r.order; }
  );

  for (int i = N - 5; i < N; ++i) {
    cout << scores[i].order << ' ';
  }

  return 0;
}
