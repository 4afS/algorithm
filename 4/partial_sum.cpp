#include <iostream>
#include <vector>

using namespace std;

bool partial_sum(int i, int w, const vector<int> &a) {
  if (i == 0) {
    if (w == 0)
      return true;
    else
      return false;
  }

  if (partial_sum(i - 1, w, a)) return true;
  if (partial_sum(i - 1, w - a[i - 1], a)) return true;
  return false;
}

int main() {
  int N, W;
  cin >> N >> W;

  vector<int> a(N);
  for (int i = 0; i < N; ++i) cin >> a[i];
}