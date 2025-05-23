#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  vector<vector<int>>v(4,vector<int>(4));
  for(auto&i:v){
    for(auto&j:i){
      cin>>j;
    }
  }
  vector<int>gh{-1,0,1,0},gw{0,1,0,-1};
  for(int i=0;i<4;++i){
    for(int j=0;j<4;++j){
      for(int k=0;k<4;++k){
        if(0<=i+gh[k]&&i+gh[k]<4&&0<=j+gw[k]&&j+gw[k]<4){
          if(v[i][j]==v[i+gh[k]][j+gw[k]]){
            cout<<"CONTINUE\n";
            return 0;
          }
        }
      }
    }
  }
  cout<<"GAMEOVER\n";
  return 0;
}
