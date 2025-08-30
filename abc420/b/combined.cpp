#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char c;
      cin >> c;
      v[i][j] = c - '0';
    }
  }
  vector<int> score(n, 0);
  for (int i = 0; i < m; ++i) {
    int x, y;
    x = y = 0;
    for (int j = 0; j < n; ++j) {
      if (v[j][i] == 0) {
        ++x;
      } else if (v[j][i] == 1) {
        ++y;
      } else
        abort();
    }
    if (x == 0 || y == 0) {
      for (int j = 0; j < n; ++j) {
        ++score[j];
      }
    } else if (x < y) {
      for (int j = 0; j < n; ++j) {
        if (v[j][i] == 0) {
          ++score[j];
        }
      }
    } else if (x > y) {
      for (int j = 0; j < n; ++j) {
        if (v[j][i] == 1) {
          ++score[j];
        }
      }
    } else
      abort();
  }
  int maxscore = *max_element(score.begin(), score.end());
  bool first = true;
  for (int i = 0; i < n; ++i) {
    if (score[i] == maxscore) {
      if (first) {
        first = false;
      } else {
        cout << " ";
      }
      cout << i + 1;
    }
  }
  cout << endl;
  return 0;
}