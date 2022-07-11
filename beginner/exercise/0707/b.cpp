#include <iostream>
#include <cstdio>

using std::cin;

const int UPPER_BOUND = 10000 + 1;

int main() {
  int bucket[UPPER_BOUND] = {0,};

  int N;
  cin >> N;

  int value;
  for (int i = 0; i < N; ++i) {
    scanf("%d", &value); // NOLINT(cert-err34-c)
    ++bucket[value];
  }

  for (int i = 0; i < UPPER_BOUND; ++i) {
    int count = bucket[i];
    for (int j = 0; j < count; ++j) {
      printf("%d\n", i);
    }
  }

  return 0;
}
