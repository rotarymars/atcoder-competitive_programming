#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string s;
  cin >> s;
  int ans = 0;
  while (!s.empty()) {
    char back = s.back();
    s.pop_back();
    if (back == '0' && back == s.back())
      s.pop_back();
    ans++;
  }
  cout << ans << endl;
  return 0;
}
