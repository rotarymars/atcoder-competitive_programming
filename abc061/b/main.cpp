#include <iostream>
#include <map>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  map<int,int>mp;
  for(int i=0;i<m;++i){
    int u,v;
    cin>>u>>v;
    ++mp[u];
    ++mp[v];
  }
  for(int i=0;i<n;++i){
    cout<<mp[1+i]<<'\n';
  }
  return 0;
}
