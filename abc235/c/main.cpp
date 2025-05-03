#include <iostream>
#include <map>
#include <vector>
using namespace std;
// #define _DEBUG
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,q;
  cin>>n>>q;
  map<int,vector<int>>mp;
  for(int i=1;i<=n;++i){
    int a;
    cin>>a;
    mp[a].push_back(i);
  }
  #ifdef _DEBUG
  cout<<"INPUT DONE"<<endl<<flush;
  #endif
  for(int i=0;i<q;++i){
    int x,k;
    cin>>x>>k;
    if((int)mp[x].size()>=k){
      cout<<mp[x][--k]<<'\n';
    }
    else{
      cout<<"-1\n";
    }
  }
  return 0;
}
