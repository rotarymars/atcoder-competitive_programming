#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;
// #define _DEBUG
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w,x,y;
  cin>>h>>w>>x>>y;
  vector<vector<char>>v(h,vector<char>(w));
  for(int i=0;i<h;i++){
    for(int j=0;j<w;++j){
      cin>>v[i][j];
    }
  }
  string d;
  cin>>d;
  vector<int>gh{-1,0,1,0},gw{0,1,0,-1};
  pair<int,int>now{--x,--y};
  int ans=0;
  for(int i=0;i<int(d.size());++i){
    if(d[i]=='U')if(0<=now.first+gh[0]&&now.first+gh[0]<h&&0<=now.second+gw[0]&&now.second+gw[0]<w)if(v[now.first+gh[0]][now.second+gw[0]]!='#')now.first+=gh[0],now.second+=gw[0];
    if(d[i]=='R')if(0<=now.first+gh[1]&&now.first+gh[1]<h&&0<=now.second+gw[1]&&now.second+gw[1]<w)if(v[now.first+gh[1]][now.second+gw[1]]!='#')now.first+=gh[1],now.second+=gw[1];
    if(d[i]=='D')if(0<=now.first+gh[2]&&now.first+gh[2]<h&&0<=now.second+gw[2]&&now.second+gw[2]<w)if(v[now.first+gh[2]][now.second+gw[2]]!='#')now.first+=gh[2],now.second+=gw[2];
    if(d[i]=='L')if(0<=now.first+gh[3]&&now.first+gh[3]<h&&0<=now.second+gw[3]&&now.second+gw[3]<w)if(v[now.first+gh[3]][now.second+gw[3]]!='#')now.first+=gh[3],now.second+=gw[3];
    if(v[now.first][now.second]=='@'){
      ++ans;
      v[now.first][now.second]='.';
    }
    #ifdef _DEBUG
    cout<<now.first<<' '<<now.second<<endl;
    #endif
  }
  cout<<now.first+1<<' '<<now.second+1<<' '<<ans<<endl;
  return 0;
}
