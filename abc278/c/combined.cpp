#include <iostream>
#include <set>
#include <utility>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n, q;
  cin >> n >> q;
  set<pair<int, int>> se;
  for (; q--;) {
    int t, a, b;
    cin >> t >> a >> b;
    if (t == 1) {
      a--;
      b--;
      se.insert(make_pair(a, b));
    } else if (t == 2) {
      a--;
      b--;
      se.erase(make_pair(a, b));
    } else if (t == 3) {
      a--;
      b--;
      cout << ((se.contains(make_pair(a, b)) && se.contains(make_pair(b, a)))
                   ? "Yes"
                   : "No")
           << '\n';
    }
  }
  return 0;
}