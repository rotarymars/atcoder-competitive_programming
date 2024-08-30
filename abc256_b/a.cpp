#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &i : a)
    cin >> i;
  vector<bool> m(4, false);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    m[0] = true;
    for (int j = 3; j >= 0; j--) {
      if (m[j] == false)
        continue;
      m[j] = false;
      int t = a[i] + j;
      if (t > 3)
        ans++;
      else
        m[t] = true;
    }
  }
  cout << ans << endl;
  return 0;
}
