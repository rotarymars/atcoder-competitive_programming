#include <iostream>
#include <vector>
using namespace std;
struct cloud {
  int u, d, l, r;
};
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  vector<cloud> v(n);
  vector<vector<int>> imos(2001, vector<int>(2001, 0));
  for (auto &i : v) {
    int u, d, l, r;
    cin >> u >> d >> l >> r;
    i = {--u, --d, --l, --r};
    imos[u][l]++;
    imos[u][r + 1]--;
    imos[d + 1][l]--;
    imos[d + 1][r + 1]++;
  }
  for (int i = 0; i < 2001; ++i) {
    for (int j = 0; j < 2000; ++j) {
      imos[i][j + 1] += imos[i][j];
    }
  }
  for (int i = 0; i < 2000; ++i) {
    for (int j = 0; j < 2001; ++j) {
      imos[i + 1][j] += imos[i][j];
    }
  }
  int covered = 0;
  for (int i = 0; i < 2001; ++i) {
    for (int j = 0; j < 2001; ++j) {
      if (imos[i][j]) {
        ++covered;
      }
    }
  }
  vector<vector<int>> onecnt(2002, vector<int>(2002, 0));
  for (int i = 0; i < 2001; ++i) {
    for (int j = 0; j < 2001; ++j) {
      onecnt[i + 1][j + 1] = imos[i][j] == 1;
    }
  }
  for (int i = 0; i < 2002; ++i) {
    for (int j = 0; j < 2001; ++j) {
      onecnt[i][j + 1] += onecnt[i][j];
    }
  }
  for (int i = 0; i < 2001; ++i) {
    for (int j = 0; j < 2002; ++j) {
      onecnt[i + 1][j] += onecnt[i][j];
    }
  }
  for (auto &i : v) {
    int unique = onecnt[i.d + 1][i.r + 1] - onecnt[i.u][i.r + 1] -
                 onecnt[i.d + 1][i.l] + onecnt[i.u][i.l];
    cout << 2000 * 2000 - covered + unique << '\n';
  }
  return 0;
}