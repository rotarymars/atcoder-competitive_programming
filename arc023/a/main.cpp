#include <iostream>
using namespace std;
constexpr long long calc(long long y,long long m,long long d){
  if(m<=2){
    m+=12;
    --y;
  }
  long long ans=0;
  ans+=y*365ll;
  ans+=y/4ll;
  ans-=y/100ll;
  ans+=y/400ll;
  ans+=306ll*(m+1ll)/10ll;
  ans+=d;
  ans-=429;
  return ans;
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  constexpr long long today=calc(2014ll,5ll,17ll);
  long long y,m,d;
  cin>>y>>m>>d;
  cout<<today-calc(y,m,d)<<endl;
  return 0;
}
