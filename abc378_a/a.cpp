#include <iostream>
#include <map>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  map<int, int> mp;
  for (int i = 0; i < 4; i++) {
    int temp;
    cin >> temp;
    mp[temp]++;
  }
  int ans = 0;
  for (auto i : mp) {
    ans += i.second / 2;
  }
  cout << ans << endl;
  return 0;
}
