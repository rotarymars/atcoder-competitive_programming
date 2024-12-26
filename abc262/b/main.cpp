#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  vector<vector<int>>v(n);
  for(int i=0;i<m;++i){
    int u,vv;
    cin>>u>>vv;
    --u,--vv;
    v[vv].push_back(u);
    v[u].push_back(vv);
  }
  for(int i=0;i<n;++i){
    sort(v[i].begin(),v[i].end());
  }
  int cnt=0;
  for(int i=0;i<n;++i){
    for(int j=1+i;j<n;++j){
      for(int k=1+j;k<n;++k){
        if(binary_search(v[i].begin(),v[i].end(),j)&&binary_search(v[j].begin(),v[j].end(),k)&&binary_search(v[k].begin(),v[k].end(),i)){
          ++cnt;
        }
      }
    }
  }
  cout<<cnt<<endl;
  return 0;
}
