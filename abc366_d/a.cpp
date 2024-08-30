#include <iostream>
#include <vector>
#ifndef __ROTARYMARS__VECTORIO__
#define __ROTARYMARS__VECTORIO__
#include <iostream>
#include <vector>
template <class T>
std::istream &operator>>(std::istream &in, std::vector<T> &v) {
  for (T &i : v)
    in >> i;
  return in;
}
template <class T>
std::ostream &operator<<(std::ostream &out, std::vector<T> &v) {
  for (T &i : v)
    out << i << ' ';
  return out;
}
#else
#endif
#ifndef __ROTARYMARS__DEBUGPRINT__
#define __ROTARYMARS__DEBUGPRINT__
#include <iostream>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
#else
#endif
using namespace std;
using ll = long long;
ll calc(vector<vector<ll>> &v, int h1, int h2, int w1, int w2) {
  ll ret = v[h2][w2];
  if (h1 - 1 >= 0)
    ret -= v[h1 - 1][w2];
  if (w1 - 1 >= 0)
    ret -= v[h2][w1 - 1];
  if (h1 - 1 >= 0 && w1 - 1 >= 0)
    ret += v[h1 - 1][w1 - 1];
  return ret;
}

signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<vector<vector<ll>>> v(n, vector<vector<ll>>(n, vector<ll>(n)));
  for (auto &i : v)
    for (auto &j : i)
      for (ll &k : j)
        cin >> k;
  for (int i = 0; i < n; i++) {
    vector<vector<ll>> vcopy = v[i];
    for (int i = 0; i < n; i++)
      for (int j = 1; j < n; j++) {
        vcopy[i][j] = vcopy[i][j] + vcopy[i][j - 1];
      }
    for (int i = 1; i < n; i++)
      for (int j = 0; j < n; j++) {
        vcopy[i][j] = vcopy[i][j] + vcopy[i - 1][j];
      }
    v[i] = vcopy;
  }
  int q;
  cin >> q;
  for (; q; q--) {
    int l1, r1, l2, r2, l3, r3;
    cin >> l1 >> r1 >> l2 >> r2 >> l3 >> r3;
    l1--, r1--, l2--, r2--, l3--, r3--;
    ll ans = 0;
    // DP(l1),DP(r1),DP(l2),DP(r2),DP(l3),DP(r3);
    for (int i = l1; i <= r1; i++) {
      ans += calc(v[i], l2, r2, l3, r3);
      DP(calc(v[i], l2, r2, l3, r3));
    }
    cout << ans << '\n';
  }
#ifdef _DEBUG
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        cout << v[i][j][k] << ' ';
      }
      cout << '\n';
    }
#endif
  return 0;
}
