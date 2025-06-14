#include <iostream>
#include <map>
using namespace std;
#define int long long
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,l;
  cin>>n>>l;
  map<int,int>mp;
  ++mp[0];
  int bef=0;
  for(int i=0;i<n-1;++i){
    int tmp;
    cin>>tmp;
    ++mp[(bef+=tmp)%l];
    bef%=l;
  }
  long long ans=0;
  if(l%3!=0){
    cout<<0<<endl;
    return 0;
  }
  for(int i=0;true;++i){
    int dot1=i,dot2=dot1+l/3,dot3=dot2+l/3;
    if(dot3>=l)break;
    ans+=(long long)mp[dot1]*(long long)mp[dot2]*(long long)mp[dot3];
  }
  cout<<ans<<endl;
  return 0;
}
