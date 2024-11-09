#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string s;
  cin >> s;
  cout << s[1] << s[2] << s[0] << ' ' << s[2] << s[0] << s[1] << endl;
  return 0;
}
