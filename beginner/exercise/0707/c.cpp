#include <iostream>
#include <cstring>

using std::cin, std::cout;

const int UPPER_BOUND = 9 + 1;

int main() {
  char chars[11] = {0,};

  cin >> chars;

  int bucket[UPPER_BOUND] = {0,};

  int N = strlen(chars); // NOLINT(cppcoreguidelines-narrowing-conversions)

  int value;
  for (int i = 0; i < N; ++i) {
    value = chars[i] - '0';
    if (value >= 0 && value < UPPER_BOUND)
      ++bucket[value];
  }

  for (int i = UPPER_BOUND - 1; i >= 0; --i) {
    int count = bucket[i];
    for (int j = 0; j < count; ++j) {
      cout << i;
    }
  }
  cout << std::endl;

  return 0;
}
