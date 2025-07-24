#include <iostream>
#include <vector>
#include <map>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,k;
  cin>>n>>k;
  vector<int>v(n);
  for(int i=0;i<n;++i){
    cin>>v[i];
  }
  map<int,int>mp;
  for(int i=0;i<k;++i){
    ++mp[v[i]];
  }
  int ans=mp.size();
  for(int i=k;i<n;++i){
    if(mp[v[i-k]]==1)mp.erase(v[i-k]);
    else --mp[v[i-k]];
    ++mp[v[i]];
    ans=max(ans,(int)mp.size());
  }
  cout<<ans<<endl;
  return 0;
}
