#include <algorithm>
#include <iostream>
#include <memory>
#ifndef __ROTARYMARS__GCD_LCM__
#define __ROTARYMARS__GCD_LCM__ 1
#include <algorithm>
template <class T> T GCD(T a, T b) {
  while (a && b) {
    if (a >= b) {
      a %= b;
    } else {
      b %= a;
    }
  }
  return std::max(a, b);
}
template <class T> T LCM(T a, T b) { return a / GCD(a, b) * b; }
#else
#endif
#ifndef __ROTARYMARS__ENUM_DIVISORS__
#define __ROTARYMARS__ENUM_DIVISORS__
#include <vector>
using namespace std;
template <class T> vector<T> ENUM_DIVISORS(T n) {
  vector<T> result;
  for (T i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      result.push_back(i);
      if (n / i != i) {
        result.push_back(n / i);
      }
    }
  }
  sort(result.begin(), result.end());
  return result;
}
#else
#endif
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int a, b, k;
  cin >> a >> b >> k;
  auto v = ENUM_DIVISORS(GCD(a, b));
  sort(v.begin(), v.end());
  cout << v[v.size() - k] << endl;
  return 0;
}
