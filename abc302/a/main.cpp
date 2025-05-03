#include <iostream>
using namespace std;
#ifndef __ROTARYMARS__RUD__
#define __ROTARYMARS__RUD__
template<class T>
T RUD(T a, T b) {
  return ((a + b - (T)1) / b);
}
#else
#endif
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long a,b;
  cin>>a>>b;
  cout<<RUD(a,b)<<endl;
  return 0;
}
