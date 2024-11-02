#include <iostream>
#include <utility>
#include <vector>
#ifndef __ROTARYMARS__RUD__
#define __ROTARYMARS__RUD__
template <class T>
T RUD(T a, T b) {
  return ((a + b - (T)1) / b);
}
#else
#endif
using namespace std;
long long f(long long a, long long b, long long c) {
  long long d = c / a;
  if (d * a + b >= c)
    return d * a + b;
  else
    return (d + 1) * a + b;
}
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<pair<long long, long long>> v(n);
  for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
  int q;
  cin >> q;
  while (q--) {
    long long t, d;
    cin >> t >> d;
    --t;
    cout << f(v[t].first, v[t].second, d) << '\n';
  }
  return 0;
}
