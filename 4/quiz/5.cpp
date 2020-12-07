#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long N;
int count = 0;

void solve(long long now, int used) {
  if (now > N) return;
  if (used == 0b111) ++count;

  solve(now * 10 + 7, used | 0b100);
  solve(now * 10 + 5, used | 0b010);
  solve(now * 10 + 3, used | 0b001);
}

int main() {
  cin >> N;

  solve(0, 0);

  cout << count << endl;
}