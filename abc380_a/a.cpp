#include <iostream>
#include <string>
using namespace std;
int f(string s, char tar) {
  int ret = 0;
  for (char& i : s)
    if (i == tar) ++ret;
  return ret;
}
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string s;
  cin >> s;
  if (f(s, '1') == 1 && f(s, '2') == 2 && f(s, '3') == 3) {
    cout << "Yes" << endl;
  } else
    cout << "No" << endl;
  return 0;
}
