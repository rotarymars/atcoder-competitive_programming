#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
#include <vector>
using namespace std;
bool comp(vector<int>& v, vector<int>& vv) {
  for (int i = 0; i < v.size(); i++) {
    if (v[i] < vv[i]) return true;
    if (v[i] > vv[i]) return false;
  }
  return false;
}
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> v;
  vector<int> base(n);
  base[0] = 1;
  for (int i = 1; i < n; ++i) {
    base[i] = base[i - 1] + 10;
  }
  while (true) {
    v.push_back(base);
    bool ismax = true;
    for (int i = n - 1; i >= 1; --i) {
      if (base[i] - 10 == base[i - 1]) continue;
      ismax = false;
    }
    if (base.back() != m) ismax = false;
    if (ismax) break;

    int untilwhich = -1;
    for (int i = n - 1; i >= 0; --i) {
      if (base[i] < m - 10 * (n - 1 - i)) {
        ++base[i];
        untilwhich = i;
        break;
      }
    }
    for (int i = untilwhich + 1; i < n; i++) base[i] = base[i - 1] + 10;
  }
  sort(v.begin(), v.end(), comp);
  cout << v.size() << '\n';
  for (auto& i : v) {
    for (int j = 0; j < n; ++j) {
      if (j == 0) [[unlikely]]
        cout << i[j];
      else
        cout << ' ' << i[j];
    }
    cout << '\n';
  }
  return 0;
}
