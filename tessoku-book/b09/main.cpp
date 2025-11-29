#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  vector<vector<int>> v(1501, vector<int>(1501, 0));
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    ++v[b][a];
    ++v[d][c];
    --v[b][c];
    --v[d][a];
  }
  for (int i = 0; i < 1501; ++i) {
    for (int j = 0; j < 1501; ++j) {
      if (j != 0) {
        v[i][j] = v[i][j] + v[i][j - 1];
      }
    }
  }
  for (int i = 0; i < 1501; ++i) {
    for (int j = 0; j < 1501; ++j) {
      if (i != 0) {
        v[i][j] = v[i][j] + v[i - 1][j];
      }
    }
  }
  long long cnt = 0;
  for (int i = 0; i < 1501; ++i) {
    for (int j = 0; j < 1501; ++j) {
      if (v[i][j] != 0) {
        ++cnt;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
