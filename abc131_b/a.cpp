#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, l, now, mi = 500, s = 0;
  cin >> n >> l;
  for (int i = 1; i <= n; i++) {
    now = l + i - 1;
    if (abs(now) < abs(mi))
      mi = now;
    s += now;
  }
  cout << s - mi << endl;
}
