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
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int appendint = 0b0;
    for (int i = 0; i < m; i++) {
      if (s[i] == 'o') {
        appendint |= (1 << (m - i - 1));
      }
    }
    v[i] = appendint;
  }
  DP(v);
  int ans = 0;
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++) {
      if ((v[i] | v[j]) == (1 << m) - 1)
        ans++;
    }
  cout << ans << endl;
  return 0;
}
