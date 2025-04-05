// #define _DEBUG
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
  long long n;
  cin>>n;
  long long ans=0;
  long long jmin=1,jmax=1'000'000'000;
  for(long long i=1;;++i){
    while(jmin!=jmax){
      long long tmpj=(jmin+jmax)/2;
      long long x=(1ll<<i)*(tmpj*tmpj);
      if(x>n){
        jmax=tmpj;
      }
      else{
        jmin=tmpj+1;
      }
    }
    while((1ll<<i)*jmin*jmin>n){
      --jmin;
    }
    #ifdef _DEBUG
    cout<<i<<' '<<jmin<<endl;
    #endif
    ans+=(jmin+1)/2;
    jmax=jmin+1;
    jmin=1;
    if((1ll<<i)>n){
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
