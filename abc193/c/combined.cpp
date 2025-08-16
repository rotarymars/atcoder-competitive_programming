#include <iostream>
#include <unordered_set>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  long long n;
  cin >> n;
  unordered_set<long long> s;
  for (int i = 2; i * i <= n; ++i) {
    long long x = i * i;
    while (x <= n) {
      s.insert(x);
      x *= i;
    }
  }
  cout << n - s.size() << endl;
  return 0;
}