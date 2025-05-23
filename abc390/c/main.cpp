#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w;
  cin>>h>>w;
  vector<vector<char>>v(h,vector<char>(w));
  for(auto&i:v){
    for(auto&j:i){
      cin>>j;
    }
  }
  int minblackh=h,maxblackh=-1,minblackw=w,maxblackw=-1;
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      if(v[i][j]=='#'){
        minblackh=min(minblackh,i);
        maxblackh=max(maxblackh,i);
        minblackw=min(minblackw,j);
        maxblackw=max(maxblackw,j);
      }
    }
  }
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      if(minblackh<=i&&i<=maxblackh&&minblackw<=j&&j<=maxblackw){
        if(v[i][j]=='.'){
          cout<<"No\n";
          return 0;
        }
      }
      else{
        if(v[i][j]=='#'){
          cout<<"No\n";
          return 0;
        }
      }
    }
  }
  cout<<"Yes\n";
  return 0;
}
