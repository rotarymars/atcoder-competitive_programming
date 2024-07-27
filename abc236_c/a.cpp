#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int a, b;
  cin >> a >> b;
  vector<string> v(a);
  for (string &i : v)
    cin >> i;
  set<string> se;
  for (; b; b--) {
    string tmp;
    cin >> tmp;
    se.insert(tmp);
  }
  for (string &i : v) {
    if (se.contains(i))
      cout << "Yes" << '\n';
    else
      cout << "No" << '\n';
  }
  return 0;
}
