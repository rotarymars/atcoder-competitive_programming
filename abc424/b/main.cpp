#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>ans;
void compute(const auto&v){
  for(int i=0;i<v.size();++i){
    bool flag=true;
    for(int j=0;j<v[i].size();++j){
      if(!v[i][j]){
        flag=false;
        break;
      }
    }
    if(flag&&find(ans.begin(),ans.end(),i+1)==ans.end()){
      ans.push_back(1+i);
    }
  }
  return;
}
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n,m,k;
  cin>>n>>m>>k;
  vector<vector<bool>>v(n,vector<bool>(m,false));
  for(int i=0;i<k;++i){
    int a,b;
    cin>>a>>b;
    --a,--b;
    v[a][b]=true;
    compute(v);
  }
  for(int i=0;i<ans.size();++i){
    cout<<(i>0?" ":"")<<ans[i];
  }
  cout<<endl;
  return 0;
}
