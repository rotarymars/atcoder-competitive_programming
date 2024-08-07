#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  string s;
  cin >> n >> s;
  int mode = 1;
  for (int i = 0; i < n; i++) {
    if (s[i] == '\"')
      mode *= -1;
    if (mode == 1 && s[i] == ',')
      s[i] = '.';
  }
  cout << s << endl;
  return 0;
}
