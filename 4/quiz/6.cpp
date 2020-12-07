#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> memo;

bool partial_sum(int i, int w, const vector<int> &a) {
  if (i == 0) {
    if (w == 0)
      return true;
    else
      return false;
  }

  if (memo[i][w] != -1) return memo[i][w];

  if (partial_sum(i - 1, w, a)) return memo[i][w] = true;
  if (partial_sum(i - 1, w - a[i - 1], a)) return memo[i][w] = true;
  return memo[i][w] = false;
}

int main() {
  int N, W;
  cin >> N >> W;

  vector<int> a(N);
  for (int i = 0; i < N; ++i) cin >> a[i];

  memo.assign(N + 1, vector<int>(W + 1, -1));

  cout << (partial_sum(N, W, a) ? "YES" : "NO") << endl;

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < W; ++j) {
      cout << memo[i][j] << endl;
    }
  }
}
