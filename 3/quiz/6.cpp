#include <iostream>
#include <vector>

using namespace std;

int main() {
  int K, S;
  cin >> K >> S;

  vector<int> A(K + 1);
  for (int i = 0; i < K + 1; ++i) A[i] = i;

  int sum = 0;
  for (int x : A) {
    for (int y : A) {
      int z = S - (x + y);

      if (z >= 0 && z <= K) {
        cout << "X = " << x << ", Y = " << y << ", Z = " << S - (x + y) << endl;
        ++sum;
      }
    }
  }

  cout << sum << endl;
}