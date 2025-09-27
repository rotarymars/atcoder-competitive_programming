#include <iostream>
#include <set>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int a, b, c;
  cin >> a >> b >> c;
  set<int> se;
  se.insert(a), se.insert(b), se.insert(c);
  cout << (se.size() <= 2 ? "Yes" : "No") << "\n";
  return 0;
}