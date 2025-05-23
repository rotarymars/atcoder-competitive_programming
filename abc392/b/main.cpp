#include <iostream>
#include <vector>
#include <set>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  set<int>se;
  for(int i=0;i<m;++i){
    int t;
    cin>>t;
    se.insert(t);
  }
  vector<int>ans;
  for(int i=1;i<=n;++i){
    if(!se.contains(i)){
      ans.push_back(i);
    }
  }
  cout<<ans.size()<<'\n';
  for(int i=0;i<(int)ans.size();++i){
    if(i==0)[[unlikely]]{
      cout<<ans[i];
    }
    else{
      cout<<' '<<ans[i];
    }
  }
  cout<<'\n';
  return 0;
}
