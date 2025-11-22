#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int h,w,q;
  cin>>h>>w>>q;
  vector<vector<int>>color(h,vector<int>(w,0));
  vector<vector<bool>>tape(h,vector<bool>(w,false));
  for(int i=0;i<q;i++){
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
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      /* if(!tape[i][j])*/cout<<color[i][j]<<(j!=w-1?" ":"");
      // else cout<<"0 ";
    }
    cout<<endl;
  }
  return 0;
}
