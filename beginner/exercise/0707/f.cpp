#include <iostream>
#include <algorithm>

typedef struct {
  int gold;
  int silver;
  int bronze;
} record;

using std::cin, std::cout;

int main() {
  int N, target_id;
  cin >> N
      >> target_id;

  record records[N];
  record target;
  for (record &r : records) {
    int id;
    int gold;
    int silver;
    int bronze;

    cin >> id
        >> gold
        >> silver
        >> bronze;

    r = {
        .gold = gold,
        .silver = silver,
        .bronze = bronze,
    };

    if (target_id == id)
      target = r;
  }

  std::sort(
      records,
      records + N,
      [](record l, record r) -> bool {
        return l.gold < r.gold ||
            (l.gold == r.gold && l.silver < r.silver) ||
            (l.gold == r.gold && l.silver == r.silver && l.bronze < r.bronze);
      }
  );

  for (int i = N - 1; i >= 0; --i) {
    record r = records[i];
    if (r.gold == target.gold &&
        r.silver == target.silver &&
        r.bronze == target.bronze) {
      cout << (N - i) << std::endl;
      break;
    }
  }

  return 0;
}
