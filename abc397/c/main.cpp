#include <iostream>
#include <vector>
#include <map>
using namespace std;
// #define _DEBUG
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto&i:v){
    cin>>i;
  }
  map<int,int>left,right;
  ++left[v.front()];
  for(int i=1;i<n;++i){
    ++right[v[i]];
  }
  int ans=left.size()+right.size();
  #ifdef _DEBUG
  cout<<ans<<endl;
  #endif
  for(int i=1;i<n-1;++i){
    ++left[v[i]];
    --right[v[i]];
    if(right[v[i]]==0){
      auto it=right.find(v[i]);
      right.erase(it);
    }
    ans=max(ans,(int)left.size()+(int)right.size());
    #ifdef _DEBUG
    cout<<ans<<endl;
    #endif
  }
  cout<<ans<<endl;
  return 0;
}
