#include <iostream>
#include <vector>

#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

const long long MOD = 1000000007;
const long long INF = ((1LL << 62) - (1LL << 31));

template <class T>
void chmin(T& a, T b) {
  if (a > b) a = b;
}

template <class T>
void chmax(T& a, T b) {
  if (a < b) a = b;
}

using namespace std;

int resolve(vector<vector<int>> abc, int pre) {}

int main() {
  int N;
  cin >> N;

  vector<vector<int>> abc(N, vector<int>(3));
  rep(i, 0, N) cin >> abc[i][0] >> abc[i][1] >> abc[i][2];

  vector<vector<int>> dp(N, vector<int>(3));
  dp[0] = {
      abc[0][0],
      abc[0][1],
      abc[0][2],
  };

  rep(i, 1, N) {
    dp[i] = {abc[i][0] + max(dp[i - 1][1], dp[i - 1][2]),
             abc[i][1] + max(dp[i - 1][0], dp[i - 1][2]),
             abc[i][2] + max(dp[i - 1][0], dp[i - 1][1])};
  }

  cout << max(dp[N - 1][0], max(dp[N - 1][1], dp[N - 1][2])) << endl;
}