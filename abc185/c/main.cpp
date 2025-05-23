#include <iostream>
#ifndef __ROTARYMARS__COMBINATIONS__
#define __ROTARYMARS__COMBINATIONS__
template<class T>
T COMBINATIONS(T a, T b){
  T ret=1;
  for(T i=1;i<=b;++i){
    ret*=a-i;
    ret/=i;
  }
  return ret;
}
#endif
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long n;
  cin>>n;
  cout<<COMBINATIONS(n,11ll)<<endl;
  return 0;
}
