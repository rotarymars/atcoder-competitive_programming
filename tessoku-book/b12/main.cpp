#include <iomanip>
#include <iostream>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  long double n;
  cin >> n;
  long double left = 0, right = 1000;
  while (right - left > (long double)0.00001) {
    long double mid = (left + right) / static_cast<long double>(2);
    if (mid * mid * mid + mid > n) {
      right = mid;
    } else {
      left = mid;
    }
  }
  cout << fixed << setprecision(10) << left << endl;
  return 0;
}
