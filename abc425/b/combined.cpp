#include <iostream>
#include <set>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &i : v) {
    cin >> i;
  }
  set<int> se;
  for (int i = 1; i <= n; ++i) {
    se.insert(i);
  }
  for (int i = 0; i < n; ++i) {
    if (v[i] != -1 && !se.contains(v[i])) {
      cout << "No\n";
      return 0;
    } else if (v[i] != -1)
      se.erase(v[i]);
  }
  auto it = se.begin();
  for (int i = 0; i < n; ++i) {
    if (v[i] == -1) {
      v[i] = *it;
      ++it;
    }
  }
  cout << "Yes\n";
  for (int i = 0; i < n; ++i) {
    cout << (i == 0 ? "" : " ") << v[i];
  }
  cout << endl;
  return 0;
}