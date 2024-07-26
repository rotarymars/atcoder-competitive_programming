#include <iostream>
#include <set>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  set<string> se;
  for (; n; n--) {
    string tmp;
    cin >> tmp;
    se.insert(tmp);
  }
  cout << se.size() << endl;
  return 0;
}
