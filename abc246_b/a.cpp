#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  long double a, b;
  cin >> a >> b;
  long double d = a * a + b * b;
  d = sqrt(d);
  cout << fixed << setprecision(12) << a / d << ' ' << b / d << endl;
  return 0;
}
