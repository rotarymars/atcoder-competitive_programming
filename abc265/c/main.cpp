#include <iostream>
#include <utility>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w;
  cin>>h>>w;
  vector<vector<char>>v(h,vector<char>(w));
  vector<vector<bool>>visited(h,vector<bool>(w,false));
  for(auto&i:v){
    for(auto&j:i){
      cin>>j;
    }
  }
  pair<int,int>now{0,0};
  while(true){
    pair<int,int>next=now;
    if(v[now.first][now.second]=='U'){
      --next.first;
    }
    else if(v[now.first][now.second]=='D'){
      ++next.first;
    }
    else if(v[now.first][now.second]=='L'){
      --next.second;
    }
    else if(v[now.first][now.second]=='R'){
      ++next.second;
    }
    if(next.first<0||next.first>=h||next.second<0||next.second>=w){
      cout<<now.first+1<<' '<<now.second+1<<endl;
      return 0;
    }
    else if(visited[next.first][next.second]){
      cout<<-1<<endl;
      return 0;
    }
    else{
      visited[now.first][now.second]=true;
      now=next;
    }
  }
  return 0;
}
