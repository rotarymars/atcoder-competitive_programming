#include <iostream>
#include <set>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  set<char> se;
  for (; n; n--) {
    char tmp;
    cin >> tmp;
    se.insert(tmp);
  }
  cout << (se.size() == 4 ? "Four" : "Three") << endl;
  return 0;
}
