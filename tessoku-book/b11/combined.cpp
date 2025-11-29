#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &i : v) {
    cin >> i;
  }
  sort(v.begin(), v.end());
  int q;
  cin >> q;
  while (q--) {
    int x;
    cin >> x;
    cout << distance(v.begin(), lower_bound(v.begin(), v.end(), x)) << '\n';
  }
  return 0;
}