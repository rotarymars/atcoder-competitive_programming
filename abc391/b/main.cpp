#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  vector<vector<char>>v(n,vector<char>(n)),vv(m,vector<char>(m));
  for(auto&i:v){
    for(auto&j:i){
      cin>>j;
    }
  }
  for(auto&i:vv){
    for(auto&j:i){
      cin>>j;
    }
  }
  for(int i=0;i<=n-m;++i){
    for(int j=0;j<=n-m;++j){
      bool ok=true;
      for(int k=0;k<m;++k){
        for(int l=0;l<m;++l){
          if(v[i+k][j+l]!=vv[k][l]){
            ok=false;
          }
        }
      }
      if(ok){
        cout<<i+1<<' '<<j+1<<endl;
        return 0;
      }
    }
  }
  return 0;
}
