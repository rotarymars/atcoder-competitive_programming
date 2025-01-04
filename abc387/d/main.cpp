#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w;
  cin>>h>>w;
  vector<vector<char>>v(h,vector<char>(w));
  vector<vector<pair<bool,bool>>>already(h,vector<pair<bool,bool>>(w,make_pair(false,false)));
  for(auto&i:v){
    for(auto&j:i){
      cin>>j;
    }
  }
  // {{direction,cnt},{h,w}}
  // before direction 0>horizontal, 1>vertical
  queue<pair<pair<bool,int>,pair<int,int>>>que;
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      if(v[i][j]=='S'){
        que.push(make_pair(make_pair(false,0),make_pair(i,j)));
        que.push(make_pair(make_pair(true,0),make_pair(i,j)));
      }
    }
  }
  while(!que.empty()){
    auto now=que.front();
    que.pop();
    if(v[now.second.first][now.second.second]=='G'){
      cout<<now.first.second<<endl;
      return 0;
    }
    if(now.first.first){
      if(already[now.second.first][now.second.second].first)continue;
      else already[now.second.first][now.second.second].first=true;
    }
    else{
      if(already[now.second.first][now.second.second].second)continue;
      else already[now.second.first][now.second.second].second=true;
    }
    if(!now.first.first){
      if(now.second.first-1>=0){
        if(v[now.second.first-1][now.second.second]!='#'){
          que.push(make_pair(make_pair(true,now.first.second+1),make_pair(now.second.first-1,now.second.second)));
        }
      }
      if(now.second.first+1<h){
        if(v[now.second.first+1][now.second.second]!='#'){
          que.push(make_pair(make_pair(true,now.first.second+1),make_pair(now.second.first+1,now.second.second)));
        }
      }
    }
    else{
      if(now.second.second-1>=0){
        if(v[now.second.first][now.second.second-1]!='#'){
          que.push(make_pair(make_pair(false,now.first.second+1),make_pair(now.second.first,now.second.second-1)));
        }
      }
      if(now.second.second+1<w){
        if(v[now.second.first][now.second.second+1]!='#'){
          que.push(make_pair(make_pair(false,now.first.second+1),make_pair(now.second.first,now.second.second+1)));
        }
      }
    }
  }
  cout<<-1<<endl;
  return 0;
}
