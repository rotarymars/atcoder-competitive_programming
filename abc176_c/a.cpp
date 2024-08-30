#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  long long front = 0, ans = 0;
  for (; n; n--) {
    long long tmp;
    cin >> tmp;
    if (front > tmp)
      ans += front - tmp;
    else
      front = tmp;
  }
  cout << ans << endl;
  return 0;
}
