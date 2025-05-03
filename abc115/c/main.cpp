#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,k;
  cin>>n>>k;
  vector<int>v(n);
  for(auto&i:v){
    cin>>i;
  }
  --k;
  sort(v.begin(),v.end());
  int ans=INT_MAX;
  for(auto it=v.begin();it+k!=v.end();++it){
    ans=min(ans,*(it+k)-*it);
  }
  cout<<ans<<endl;
}
