#include <iostream>
#include <set>
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
  vector<int> gh{-1, -1, 0, 1, 1, 1, 0, -1}, gw{0, 1, 1, 1, 0, -1, -1, -1};
  for (int i = 0; i < h; i++)
    for (int j = 0; j < w; j++) {
      if (v[i][j] != '.')
        continue;
      set<int> se;
      for (int k = 0; k < 8; k++) {
        if (i + gh[k] >= 0 && i + gh[k] < h && j + gw[k] >= 0 && j + gw[k] < w)
          se.insert(v[i + gh[k]][j + gw[k]]);
      }
      for (int k = 1; k <= 5; k++)
        if (!se.contains('0' + k)) {
          v[i][j] = k + '0';
          break;
        }
    }
  for (auto &i : v) {
    for (auto &j : i)
      cout << j;
    cout << '\n';
  }
  return 0;
}
