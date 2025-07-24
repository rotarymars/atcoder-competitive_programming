#include <iostream>
#include <climits>
#include <bit>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  int ans=INT_MAX;
  for(int i=0;i<(1<<(int)s.size())-1;++i){
    long long now=0;
    for(int j=0;j<(int)s.size();++j){
      if(!(i&(1<<j))){
        now+=s[j]-'0';
      }
      now*=10;
    }
    now/=10;
    if(now%3==0){
      ans=min(ans,__builtin_popcount(i));
    }
  }
  if(ans==INT_MAX)ans=-1;
  cout<<ans<<'\n';
  return 0;
}