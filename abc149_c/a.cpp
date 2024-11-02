#include <iostream>
#ifndef __ROTARYMARS__ISPRIME
#define __ROTARYMARS__ISPRIME 1
template <class T>
bool ISPRIME(const T a) {
  if (a <= 1) {
    return false;
  }
  for (T i = 2; i * i <= a; i++) {
    if (a % i == 0) {
      return false;
    }
  }
  return true;
}
#else
#endif
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int x;
  cin >> x;
  for (int i = x;; i++) {
    if (ISPRIME(i)) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
