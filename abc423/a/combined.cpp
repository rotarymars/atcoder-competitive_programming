#include <iostream>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  long double x, c;
  cin >> x >> c;
  long double maxmoney = 0.0;
  while (true) {
    maxmoney += 1000.0;
    if (1000.0 * maxmoney + maxmoney * c > 1000.0 * x) {
      cout << (int)maxmoney - (int)1000.0 << endl;
      break;
    }
  }
  return 0;
}