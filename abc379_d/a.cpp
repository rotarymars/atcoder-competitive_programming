#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int q;
  cin >> q;
  vector<long long> v;
  v.reserve(2 * 1e5);
  for (; q; q--) {
    int a;
    cin >> a;
    if (a == 1) {
      v.push_back(0ll);
    }
    if (a == 2) {
      long long t;
      cin >> t;
      for (long long& i : v) i += t;
    }
    if (a == 3) {
      long long h;
      cin >> h;
      sort(v.begin(), v.end());
      auto it = lower_bound(v.begin(), v.end(), h);
      cout << distance(it, v.end()) << '\n';
      v.erase(it, v.end());
    }
  }

  return 0;
}
