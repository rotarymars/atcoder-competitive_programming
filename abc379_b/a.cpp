#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < n - k + 1; ++i) {
    if (s.substr(i, k) == string(k, 'O')) {
      ++ans;
      for (int j = i; j < i + k; ++j) s[j] = 'X';
    }
  }
  cout << ans << endl;
  return 0;
}
