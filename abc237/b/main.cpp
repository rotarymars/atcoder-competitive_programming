#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w;
  cin>>h>>w;
  vector<vector<int>>a(h,vector<int>(w)),b(w,vector<int>(h));
  for(auto&i:a){
    for(auto&j:i){
      cin>>j;
    }
  }
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      b[j][i]=a[i][j];
    }
  }
  for(int i=0;i<w;++i){
    for(int j=0;j<h;++j){
      cout<<(j==0?"":" ")<<b[i][j];
    }
    cout<<'\n';
  }
  return 0;
}
