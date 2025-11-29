#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  string s;
  cin >> n >> s;
  vector<vector<int>> dp(n, vector<int>(n, 1));
  for (int i = 0; i < n - 1; ++i) {
    dp[i][i + 1] = max(1, (s[i] == s[i + 1] ? 1 : 0) * 2);
  }
  for (int length = 2; length < n; ++length) {
    for (int l = 0; l < n - length; ++l) {
      int r = l + length;
      if (s[l] == s[r]) {
        dp[l][r] =
            max({dp[l][r], dp[l + 1][r], dp[l][r - 1], dp[l + 1][r - 1] + 2});
      } else {
        dp[l][r] = max({dp[l][r], dp[l + 1][r], dp[l][r - 1]});
      }
    }
  }
  cout << dp[0][n - 1] << endl;
  return 0;
}