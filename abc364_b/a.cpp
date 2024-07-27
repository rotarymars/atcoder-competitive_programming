#include <iostream>
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
#include <string>
#include <utility>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  vector<vector<char>> v(h, vector<char>(w));
  for (auto &i : v)
    for (auto &j : i)
      cin >> j;
  string s;
  cin >> s;
  int gh[] = {-1, 0, 1, 0}, gw[] = {0, 1, 0, -1};
  pair<int, int> p = make_pair(--x, --y);
  for (char &i : s) {
    if (i == 'U')
      if (p.first + gh[0] >= 0 && p.first + gh[0] < h &&
          p.second + gw[0] >= 0 && p.second + gw[0] < w)
        if (v[p.first + gh[0]][p.second + gw[0]] != '#')
          p.first = p.first + gh[0], p.second = p.second + gw[0];
    if (i == 'R')
      if (p.first + gh[1] >= 0 && p.first + gh[1] < h &&
          p.second + gw[1] >= 0 && p.second + gw[1] < w)
        if (v[p.first + gh[1]][p.second + gw[1]] != '#')
          p.first = p.first + gh[1], p.second = p.second + gw[1];
    if (i == 'D')
      if (p.first + gh[2] >= 0 && p.first + gh[2] < h &&
          p.second + gw[2] >= 0 && p.second + gw[2] < w)
        if (v[p.first + gh[2]][p.second + gw[2]] != '#')
          p.first = p.first + gh[2], p.second = p.second + gw[2];
    if (i == 'L')
      if (p.first + gh[3] >= 0 && p.first + gh[3] < h &&
          p.second + gw[3] >= 0 && p.second + gw[3] < w)
        if (v[p.first + gh[3]][p.second + gw[3]] != '#')
          p.first = p.first + gh[3], p.second = p.second + gw[3];
    DP(p.first);
    DP(p.second);
  }
  cout << p.first + 1 << ' ' << p.second + 1 << endl;
  return 0;
}
