#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  vector<pair<long double, long double>> points(n);
  for (auto &i : points) {
    cin >> i.first >> i.second;
  }
  vector<vector<long double>> dp((1 << n),
                                 vector<long double>(n, (long double)INT_MAX));
  dp[0][0] = 0;
  for (int i = 0; i < (1 << n); ++i) {
    for (int j = 0; j < n; ++j) {
      if (dp[i][j] == (long double)INT_MAX) {
        continue;
      }
      for (int k = 0; k < n; ++k) {
        if (i & (1 << k)) {
          continue;
        }
        long double dist = sqrtl((points[j].first - points[k].first) *
                                     (points[j].first - points[k].first) +
                                 (points[j].second - points[k].second) *
                                     (points[j].second - points[k].second));
        dp[i | (1 << k)][k] = min(dp[i | (1 << k)][k], dp[i][j] + dist);
      }
    }
  }
  cout << fixed << setprecision(10) << dp[((1 << n) - 1)][0] << endl;
  return 0;
}
