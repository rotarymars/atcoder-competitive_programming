#include <iostream>
#include <utility>
#include <vector>
// #define _DEBUG
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int h,w;
  cin>>h>>w;
  vector<vector<char>>v(h,vector<char>(w));
  for(auto&i:v){
    for(auto&j:i){
      cin>>j;
    }
  }
  int dh[]={-1,0,1,0},dw[]={0,1,0,-1};
  vector<pair<int,int>>p;
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      if(v[i][j]=='#'){
        p.push_back(make_pair(i,j));
      }
    }
  }
  while(!p.empty()){
    vector<pair<int,int>>changed;
    for(const auto&i:p){
      for(int j=0;j<(sizeof(dh)/sizeof(int));++j){
        if(0<=i.first+dh[j]&&i.first+dh[j]<h&&0<=i.second+dw[j]&&i.second+dw[j]<w){
          if(v[i.first+dh[j]][i.second+dw[j]]=='.'){
            pair<int,int> current(i.first+dh[j],i.second+dw[j]);
            int cnt=0;
            for(int k=0;k<(sizeof(dh)/sizeof(int));++k){
              if(0<=current.first+dh[k]&&current.first+dh[k]<h&&0<=current.second+dw[k]&&current.second+dw[k]<w){
                if(v[current.first+dh[k]][current.second+dw[k]]=='#')++cnt;
              }
            }
            if(cnt==1){
              changed.push_back(current);
            }
          }
        }
      }
    }
    p=changed;
    for(const auto&j:changed){
      v[j.first][j.second]='#';
    }
    #ifdef _DEBUG
    for(int i=0;i<h;++i){
      for(int j=0;j<w;++j){
        cout<<v[i][j];
      }
      cout<<endl;
    }
    cout<<endl;
    #endif
  }
  int ans=0;
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      if(v[i][j]=='#'){
        ++ans;
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
