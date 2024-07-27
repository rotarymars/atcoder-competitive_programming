#include <iostream>
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
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int h, w;
  cin >> h >> w;
  vector<vector<char>> v(h, vector<char>(w));
  for (auto &i : v)
    for (char &j : i)
      cin >> j;
  for (int i = 0; i < h; i++)
    for (int j = 0; j < w - 1; j++) {
      if (v[i][j] == v[i][j + 1] && v[i][j] == 'T')
        v[i][j] = 'P', v[i][j + 1] = 'C';
      DP(v);
    }
  for (auto &i : v) {
    for (char &j : i)
      cout << j;
    cout << '\n';
  }
  return 0;
}
