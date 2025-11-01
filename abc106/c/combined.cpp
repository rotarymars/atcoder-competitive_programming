#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  string s;
  long long k;
  cin >> s >> k;
  string t = "";
  for (int i = 0; i < static_cast<int>(s.size()); ++i) {
    if (s[i] == '1') {
      t += s[i];
    } else {
      t += s[i];
      break;
    }
  }
  cout << (k > static_cast<long long>(t.size()) - 1 ? t.back() : '1') << endl;
  // cout<<t.size()<<endl;
  return 0;
}