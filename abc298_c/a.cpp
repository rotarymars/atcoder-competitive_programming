#include <iostream>
#include <map>
#include <set>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, q;
  cin >> n >> q;
  map<int, set<int>> paper;
  map<int, multiset<int>> box;
  for (int i = 0; i < q; i++) {
    int a;
    cin >> a;
    if (a == 1) {
      int i, j;
      cin >> i >> j;
      paper[i].insert(j);
      box[j].insert(i);
    } else if (a == 2) {
      int i;
      cin >> i;
      bool first = true;
      for (int j : box[i]) {
        if (first) {
          cout << j;
          first = false;
        } else
          cout << ' ' << j;
      }
      cout << '\n';
    } else {
      int i;
      cin >> i;
      bool first = true;
      for (int j : paper[i]) {
        if (first) {
          cout << j;
          first = false;
        } else
          cout << ' ' << j;
      }
      cout << '\n';
    }
  }
  return 0;
}
