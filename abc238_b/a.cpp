#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> cut;
  cut.reserve(n + 1);
  cut.push_back(0);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    cut.push_back((cut.back() + a) % 360);
  }
  sort(cut.begin(), cut.end());
  if (cut.back() != 360) cut.push_back(360);
  int ans = -1;
  for (int i = 1; i < cut.size(); i++) {
    ans = max(ans, cut[i] - cut[i - 1]);
  }
  cout << ans << endl;
  return 0;
}
