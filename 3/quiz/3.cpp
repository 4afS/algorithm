#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  int min = 1000000;
  int min_second = 1000000;

  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;

    if (a < min) {
      min_second = min;
      min = a;
      continue;
    }

    if (a < min_second) {
      min_second = a;
    }
  }

  cout << min << ", " << min_second << endl;
}
