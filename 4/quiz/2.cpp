#include <iostream>
#include <vector>

using namespace std;

vector<int> memo;

long long tribo(int N) {
  if (N == 0) return 0;
  if (N == 1) return 0;
  if (N == 2) return 1;

  if (memo[N] != -1) return memo[N];

  return memo[N] = tribo(N - 1) + tribo(N - 2) + tribo(N - 3);
}

int main() {
  int N;
  cin >> N;

  memo.assign(N + 2, -1);

  cout << tribo(N) << endl;
}
