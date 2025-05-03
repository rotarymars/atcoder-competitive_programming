#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  vector<int>v(n),vv(m);
  for(auto&i:v){
    cin>>i;
  }
  for(auto&i:vv){
    cin>>i;
  }
  sort(v.begin(),v.end());
  sort(vv.begin(),vv.end());
  int ans=INT_MAX;
  for(auto&i:v){
    auto it=lower_bound(vv.begin(),vv.end(),i);
    if(it!=vv.end()){
      ans=min(ans,abs(i-*it));
    }
    if(it!=vv.begin()){
      ans=min(ans,abs(i-*prev(it)));
    }
  }
  cout<<ans<<endl;
  return 0;
}
