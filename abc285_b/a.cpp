#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  string s;
  cin >> n >> s;
  for (int i = 1; i < n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i + j > n) {
        cout << j - 1 << '\n';
        break;
      }
      if (s[j - 1] == s[i + j - 1]) {
        cout << j - 1 << '\n';
        break;
      }
    }
  }
  return 0;
}
