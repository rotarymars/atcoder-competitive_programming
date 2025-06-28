#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long d;
  cin>>d;
  long long dsqrt=sqrt(d);
  long long ans=LLONG_MAX;
  for(long long i=1;i<=dsqrt;++i){
    long long current=i*i-d;
    if(current>=0){
      ans=min(ans,current);
      continue;
    }
    long long j1=ceil(sqrt(-current)),j2=floor(sqrt(-current));
    ans=min(ans,abs(j1*j1+current));
    ans=min(ans,abs(j2*j2+current));
  }
  cout<<ans<<'\n';
  return 0;
}
