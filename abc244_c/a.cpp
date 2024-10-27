#include <iostream>
#include <set>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  set<int> se;
  for (int i = 2; i <= 2 * n + 1; i++) se.insert(i);
  cout << 1 << endl;
  for (;;) {
    int tmp;
    cin >> tmp;
    if (tmp == 0) {
      return 0;
    }
    se.erase(tmp);
    cout << *se.begin() << endl;
    se.erase(se.begin());
  }
  return 0;
}
