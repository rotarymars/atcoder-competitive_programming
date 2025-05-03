#include <iostream>
#include <climits>
#ifndef __ROTARYMARS__POWMOD__
#define __ROTARYMARS__POWMOD__
template <class T>
T POWMOD(T a, T b, T c) {
  T ans = 1;
  a %= c;
  while (b != 0)
  {
    if (b & 1)
    {
      ans *= a;
    }
    a *= a;
    b >>= 1;
    a %= c;
    ans %= c;
  }
  return ans;
}
#else
#endif

using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long n,m;
  cin>>n>>m;
  long long now=0;
  for(long long i=0;i<=m;++i){
    now+=POWMOD(n,i,LLONG_MAX);
    if(now>1'000'000'000){
      cout<<"inf\n";
      return 0;
    }
  }
  if(now<=1'000'000'000){
    cout<<now<<endl;
  }
  else{
    cout<<"inf\n";
  }
  return 0;
}
