#include <iostream>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w,q;
  cin>>h>>w>>q;
  vector<vector<int>>color(h,vector<int>(w,0));
  vector<vector<bool>>tape(h,vector<bool>(w,false));
  for(int i=0;i<q;++i){
    int a;
    cin>>a;
    if(a==1){
      int x,y,k;
      cin>>x>>y>>k;
      --x,--y;
      if(!tape[x][y])color[x][y]=k;
      if(!tape[x+1][y])color[x+1][y]=k;
      if(!tape[x][y+1])color[x][y+1]=k;
      if(!tape[x+1][y+1])color[x+1][y+1]=k;
    }
    else{
      int a,b;
      cin>>a>>b;
      --a,--b;
      tape[a][b]=tape[a+1][b]=tape[a][b+1]=tape[a+1][b+1]=true;
    }
  }
  for(int i=0;i<h;++i){
    for(int j=0;j<w;++j){
      if(j!=0)cout<<' ';
      cout<<color[i][j];
    }
    cout<<'\n';
  }
  return 0;
}
