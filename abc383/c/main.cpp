#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <utility>
using namespace std;
bool operator<(pair<int,pair<int,int>>a,pair<int,pair<int,int>>b){
  return a.first<b.first;
}
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w,d;
  cin>>h>>w>>d;
  vector<vector<char>>v(h,vector<char>(w));
  priority_queue<pair<int,pair<int,int>>>que;
  vector<vector<int>>maxdistancealreadyvisited(h,vector<int>(w,-1));
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>>v[i][j];
      if(v[i][j]=='H'){
        que.push(make_pair(d,make_pair(i,j)));
        maxdistancealreadyvisited[i][j]=d;
      }
    }
  }
  vector<int>gh{-1,0,1,-0},gw{0,1,0,-1};
  while(!que.empty()){
    auto now=que.top();
    que.pop();
    maxdistancealreadyvisited[now.second.first][now.second.second]=now.first;
    if(now.first==0)continue;
    for(int k=0;k<4;k++){
      pair<int,int>next{now.second.first+gh[k],now.second.second+gw[k]};
      if(next.first>=0&&next.first<h&&next.second>=0&&next.second<w){
        if(maxdistancealreadyvisited[next.first][next.second]<now.first-1&&v[next.first][next.second]!='#')
          que.push(make_pair(now.first-1,next));
      }
    }
  }
  int ans=0;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      if(maxdistancealreadyvisited[i][j]>=0)++ans;
    }
  }
  cout<<ans<<endl;
  return 0;
}
