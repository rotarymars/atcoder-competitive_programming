#include <iostream>
#include <limits.h>
#include <numeric>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> w(n);
  for (int &i : w)
    cin >> i;
  int ans = INT_MAX;
  for (auto i = w.begin(); i != w.end(); i++)
    ans =
        min(ans, abs(accumulate(w.begin(), i, 0) - accumulate(i, w.end(), 0)));
  cout << ans << endl;
  return 0;
}
