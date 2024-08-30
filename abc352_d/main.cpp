#include <iostream>
#include <vector>
#include <utility>
#include <limits.h>
#include <template/segtree.hpp>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
pair<int, int> op(pair<int, int> a, pair<int, int> b) {
  return make_pair(min(a.first, b.first), max(a.second, b.second));
}
pair<int, int> e() {
  return make_pair(INT_MAX, 0);
}
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> v(n); // hold p's index
  v.reserve(n);
  for (int i = 0; i < n; i++) {
    int p; cin >> p; --p;
    v[p] = make_pair(i, i);
  }
  SEGMENTTREE<pair<int, int>, op, e> seg(v); //hold max and min index for range
  int ans = INT_MAX;
  for (int i = 0; i < n - k + 1; i++) {
    auto tmppair = seg.prod(i, i + k);
    ans = min(ans, tmppair.second - tmppair.first);
  }
  cout << ans << endl;
  return 0;
}