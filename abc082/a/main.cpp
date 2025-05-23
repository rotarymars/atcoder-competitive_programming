#include <iostream>
#ifndef __ROTARYMARS__RUD__
#define __ROTARYMARS__RUD__
template<class T>
T RUD(T a, T b) {
  return ((a + b - (T)1) / b);
}
#else
#endif
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a,b;
  cin>>a>>b;
  cout<<RUD(a+b,2)<<endl;
  return 0;
}
