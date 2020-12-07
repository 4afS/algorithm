#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, w;
  cin >> n >> w;

  vector<int> a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];

  bool exist = false;
  for (int bit = 0; bit < (1 << n); ++bit) {
    cout << bit << ": {";

    int sum = 0;
    for (int i = 0; i < n; ++i) {
      if (bit & (1 << i)) {
        cout << a[i] << " ";
        sum += a[i];
      }
    }

    cout << "}" << endl;

    if (sum == w) exist = true;
  }

  cout << exist << endl;
}