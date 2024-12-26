#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
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
// #define _DEBUG
using ll=long long;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long a,b,c;
  cin>>a>>b>>c;
  vector<long long>al;
  long long acp=a,bcp=b,ccp=c;
  acp%=10;
  while(true){
    if(find(al.begin(),al.end(),acp)==al.end()){
      al.push_back(acp);
    }
    else{
      break;
    }
    acp*=a;
    acp%=10;
  }
  #ifdef _DEBUG
  for(int i=0;i<int(al.size());++i){
    cout<<al[i]<<' ';
  }
  cout<<endl;
  #endif
  bcp%=ll(al.size());
  long long mod=POWMOD(bcp,ccp,ll(al.size()))-1;
  if(mod<0)mod+=ll(al.size());
  cout<<al[mod]<<endl;
  return 0;
}
