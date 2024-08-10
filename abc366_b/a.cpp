#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool nochar(string s, int ind) {
  for (int i = ind; i < s.size(); i++)
    if (s[i] != '*')
      return false;
  return true;
}
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<string> v(n);
  for (string &i : v)
    cin >> i;
  int maxind = 0;
  for (int i = 0; i < n; i++)
    maxind = max((int)v[i].size(), maxind);
  vector<string> out(maxind);
  for (int i = 0; i < maxind; i++) {
    for (int j = n - 1; j >= 0; j--) {
      if (v[j].size() <= i)
        out[i].push_back('*');
      else
        out[i].push_back(v[j][i]);
    }
  }
  for (int i = 0; i < out.size(); i++) {
    for (int j = 0; j < out[i].size(); j++) {
      if (nochar(out[i], j))
        break;
      cout << out[i][j];
    }
    cout << '\n';
  }
  return 0;
}
