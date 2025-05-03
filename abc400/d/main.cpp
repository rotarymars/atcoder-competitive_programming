#include <iostream>
#include <climits>
#include <vector>
#include <queue>
#include <utility>
#define _DEBUG
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w,a,b,c,d;
  cin>>h>>w;
  vector<vector<char>>v(h,vector<char>(w));
  vector<vector<int>>cost(h,vector<int>(w,INT_MAX));
  for(auto&i:v){
    for(auto&j:i){
      cin>>j;
    }
  }
  cin>>a>>b>>c>>d;
  --a,--b,--c,--d;
  queue<pair<int,pair<int,int>>>que;
  que.push(make_pair(0,make_pair(a,b)));
  int dh[]={-1,0,1,0},dw[]={0,1,0,-1};
  while(!que.empty()){
    auto now=que.front();
    que.pop();
    if(cost[now.second.first][now.second.second]<=now.first){
      continue;
    }
    // if(now.second.first==c&&now.second.second==d){
    //   cout<<now.first<<endl;
    //   #ifdef _DEBUG
    //   for(int i=0;i<h;++i){
    //     for(int j=0;j<w;++j){
    //       cout<<(cost[i][j]==INT_MAX?"I":to_string(cost[i][j]).c_str())<<' ';
    //     }
    //     cout<<endl;
    //   }
    //   #endif
    //   return 0;
    // }
    cost[now.second.first][now.second.second]=now.first;
    for(int i=0;i<4;++i){
      int nh=now.second.first+dh[i],nw=now.second.second+dw[i];
      if(0<=nh&&nh<h&&0<=nw&&nw<w){
        if(v[nh][nw]!='#'&&cost[nh][nw]>now.first){
          que.push(make_pair(now.first,make_pair(nh,nw)));
        }
      }
    }
    for(int i=0;i<4;++i){
      int nh=now.second.first+dh[i],nw=now.second.second+dw[i];
      if(0<=nh&&nh<h&&0<=nw&&nw<w){
        if(v[nh][nw]=='#'){
          que.push(make_pair(now.first+1,make_pair(nh,nw)));
          v[nh][nw]='.';
        }
      }
      nh+=dh[i],nw+=dw[i];
      if(0<=nh&&nh<h&&0<=nw&&nw<w){
        que.push(make_pair(now.first+1,make_pair(nh,nw)));
        v[nh][nw]='.';
      }
    }
  }
  cout<<cost[c][d]<<endl;
  #ifdef _DEBUG
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      cout<<(cost[i][j]==INT_MAX?"I":to_string(cost[i][j]).c_str())<<' ';
    }
    cout<<endl;
  }
  #endif
  return 0;
}
