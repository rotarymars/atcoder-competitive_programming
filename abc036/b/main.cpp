#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin>>n;
  vector<vector<char>>v(n,vector<char>(n)),vv(n,vector<char>(n));
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      cin>>v[i][j];
    }
  }
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      vv[j][n-1-i]=v[i][j];
    }
  }
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      cout<<vv[i][j];
    }
    cout<<'\n';
  }
  return 0;
}
