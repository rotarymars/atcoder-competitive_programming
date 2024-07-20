#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  long double ans = 0;
  for (; n; n--) {
    long double x;
    string u;
    cin >> x >> u;
    if (u[0] == 'J')
      ans += x;
    else
      ans += x * 380000.0;
  }
  cout << fixed << setprecision(4) << ans << endl;
  return 0;
}
