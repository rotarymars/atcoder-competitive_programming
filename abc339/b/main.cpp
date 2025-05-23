#include <iostream>
#include <utility>
#include <vector>
using namespace std;
// #define _DEBUG
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w,n;
  cin>>h>>w>>n;
  vector<vector<bool>>v(h,vector<bool>(w,false));
  pair<int,int>now{0,0};
  vector<pair<int,int>>move{{-1,0},{0,1},{1,0},{0,-1}};
  int nowmove=0;
  for(int i=0;i<n;++i){
    if(v[now.first][now.second]){
      v[now.first][now.second]=false;
      --nowmove;
      if(nowmove<0){
        nowmove=3;
      }
    }
    else{
      v[now.first][now.second]=true;
      ++nowmove;
      if(nowmove>3){
        nowmove=0;
      }
    }
    now.first+=move[nowmove].first;
    now.second+=move[nowmove].second;
    if(now.first<0){
      now.first+=h;
    }
    else if(now.first>=h){
      now.first-=h;
    }
    if(now.second<0){
      now.second+=w;
    }
    else if(now.second>=w){
      now.second-=w;
    }
    #ifdef _DEBUG
    cout<<now.first<<' '<<now.second<<'\n';
    for(int i=0;i<h;++i){
      for(int j=0;j<w;++j){
        if(v[i][j]){
          cout<<'#';
        }
        else cout<<'.';
      }
      cout<<'\n';
    }
    cout<<'\n';
    #endif
  }
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      if(v[i][j]){
        cout<<'#';
      }
      else{
        cout<<'.';
      }
    }
    cout<<'\n';
  }
  return 0;
}
