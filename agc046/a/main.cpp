#include <iostream>
#ifndef __ROTARYMARS__GCD_LCM__
#define __ROTARYMARS__GCD_LCM__ 1
#include <algorithm>
template<class T>
T GCD(T a, T b) {
  while (a && b)
  {
    if (a >= b)
    {
      a %= b;
    }
    else
    {
      b %= a;
    }
  }
  return std::max(a, b);
}
template<class T>
T LCM(T a, T b) {
  return a / GCD(a, b) * b;
}
#else
#endif

using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int x;
  cin>>x;
  cout<<LCM(360,x)/x<<endl;
  return 0;
}
