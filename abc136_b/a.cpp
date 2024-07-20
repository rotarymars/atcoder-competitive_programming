#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++)
    if ((to_string(i).size()) % 2)
      ans++;
  cout << ans << endl;
  return 0;
}
