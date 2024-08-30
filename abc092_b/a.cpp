#include <iostream>
#ifndef __ROTARYMARS__RUD__
#define __ROTARYMARS__RUD__
template <class T> T RUD(T a, T b) { return ((a + b - (T)1) / b); }
#else
#endif
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, d, x;
  cin >> n >> d >> x;
  for (; n; n--) {
    int a;
    cin >> a;
    x += RUD(d, a);
  }
  cout << x << endl;
  return 0;
}
