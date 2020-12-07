#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, v;
  cin >> n;
  cin >> v;

  int sum = 0;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    if (a == v) ++sum;
  }

  cout << sum << endl;
}