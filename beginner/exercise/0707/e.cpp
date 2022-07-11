#include <iostream>
#include <cstdio>
#include <algorithm>

using std::cin, std::cout;

int main() {
  int N;
  cin >> N;

  for (int i_class = 0; i_class < N; ++i_class) {
    int n_students;
    cin >> n_students;

    int scores[n_students];
    for (int i_student = 0; i_student < n_students; ++i_student) {
      cin >> scores[i_student];
    }

    std::sort(scores, scores + n_students);

    int gap = 0;
    for (int i_student = 0; i_student < n_students - 1; ++i_student) {
      int gap_candidate = scores[i_student + 1] - scores[i_student];
      if (gap_candidate > gap) gap = gap_candidate;
    }

    printf("Class %d\n", i_class + 1);
    printf("Max %d, Min %d, Largest gap %d\n", scores[n_students - 1], scores[0], gap);
  }

  return 0;
}
