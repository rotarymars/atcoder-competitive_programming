#include <iostream>
#include <set>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  multiset<int> se;
  int q;
  cin >> q;
  for (; q--;) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      se.insert(x);
    } else if (t == 2) {
      cout << *se.begin() << '\n';
      se.erase(se.begin());
    }
  }
  return 0;
}