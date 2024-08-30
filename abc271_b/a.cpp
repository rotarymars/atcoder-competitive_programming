#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, q;
  cin >> n >> q;
  vector<vector<int>> v(n);
  for (auto &i : v) {
    int l;
    cin >> l;
    i.resize(l);
    for (int &j : i)
      cin >> j;
  }
  for (; q; q--) {
    int s, t;
    cin >> s >> t;
    cout << v[--s][--t] << '\n';
  }
  return 0;
}
