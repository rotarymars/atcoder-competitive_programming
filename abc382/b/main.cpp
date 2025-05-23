#include <iostream>
#include <set>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, d;
  string s;
  cin >> n >> d >> s;
  set<int> se;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '@') se.insert(i);
  }
  for (int i = 0; i < d; i++) {
    s[*prev(se.end())] = '.';
    se.erase(prev(se.end()));
  }
  cout << s << endl;
  return 0;
}
