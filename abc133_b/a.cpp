#include <iostream>
#include <vector>
using namespace std;
bool isint(int n) {
  for (int i = 0; i * i <= n; i++) {
    if (i * i == n) return true;
  }
  return false;
}
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, d;
  cin >> n >> d;
  vector<vector<int>> v(n);
  for (int i = 0; i < n; i++) {
    v[i].resize(d);
    for (int& j : v[i]) cin >> j;
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++) {
      int temp = 0;
      for (int k = 0; k < d; k++)
        temp += (v[i][k] - v[j][k]) * (v[i][k] - v[j][k]);
      if (isint(temp)) ans++;
    }
  cout << ans << endl;
  return 0;
}
