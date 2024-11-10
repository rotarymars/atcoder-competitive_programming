#include <iomanip>
#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  long double ans = 0;
  for (int i = 0; i < n; i++) {
    char a;
    cin >> a;
    if (a == 'A')
      ans += 4.0;
    else if (a == 'B')
      ans += 3.0;
    else if (a == 'C')
      ans += 2.0;
    else if (a == 'D')
      ans += 1.0;
    else if (a == 'F')
      ans += 0.0;
  }
  cout << fixed << setprecision(100) << ans / (long double)n << endl;
  return 0;
}
