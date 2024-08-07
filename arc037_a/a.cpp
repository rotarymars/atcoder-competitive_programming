#include <iostream>
using namespace std;
int I() {
  int a;
  cin >> a;
  return a;
}
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  int ans = 0;
  for (; n; n--)
    ans += max(0, 80 - I());
  cout << ans << endl;
  return 0;
}
