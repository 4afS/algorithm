#include <iostream>
#include <vector>

using namespace std;

int divide_times(int n) {
  int times = 0;
  while (n % 2 == 0) {
    n /= 2;
    ++times;
  }
  return times;
}

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; ++i) cin >> A[i];

  int result = 1000000000;
  for (auto a : A) {
    result = min(result, divide_times(a));
  }

  cout << result << endl;
}