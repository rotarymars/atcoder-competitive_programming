#include <iostream>
#include <utility>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> v(n);
  for (auto& i : v) cin >> i.first >> i.second;
  sort(v.begin(), v.end(),
       [](pair<int, int> a, pair<int, int> b) { return a.second > b.second; });
  auto easylowerbound = [&](int x) {
    return lower_bound(v.begin(), v.end(), x,
                       [](pair<int, int> a, int b) { return a.first < b; }) -
           v.begin();
  };
  long long ans = 0;
  for (int i = 1; i <= m; i++) {
    ans += easylowerbound(i) - v[i].first;
  }
  cout << ans << endl;
  return 0;
}
