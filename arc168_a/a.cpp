#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string s;
  cin >> s >> s;
  int ans = 0;
  for (char& i : s) {
    if (i == '>') ++ans;
  }
  cout << ans << endl;
  return 0;
}
