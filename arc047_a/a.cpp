#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, l;
  string s;
  cin >> n >> l >> s;
  int tab = 1, ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '+')
      tab++;
    else
      tab--;
    if (tab > l)
      tab = 1, ans++;
  }
  cout << ans << endl;
  return 0;
}
