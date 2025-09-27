#include <iostream>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    if (i % 2) {
      ans -= i * i * i;
    } else {
      ans += i * i * i;
    }
  }
  cout << ans << endl;
  return 0;
}