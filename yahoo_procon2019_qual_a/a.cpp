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
  int n, m;
  cin >> n >> m;
  cout << (RUD(n, 2) >= m ? "YES" : "NO") << endl;
  return 0;
}
