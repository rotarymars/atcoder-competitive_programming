#include <template/fastio.hpp>
#include <atcoder/fenwicktree>
#include <queue>
#include <utility>
using namespace std;
#define _DEBUG 0
FastIO io;
int dh[]={-1,-1,-1},dw[]={-1,0,1};
void solve() {
  int n,c;
  io.read(n,c);
  --c;
  vector<atcoder::fenwick_tree<int>>fw(n,atcoder::fenwick_tree<int>(n));
  vector<vector<char>>v(n,vector<char>(n));
  vector<vector<bool>>visited(n,vector<bool>(n,false));
  io.read(v);
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      if(v[j][i]=='#'){
        fw[i].add(j,1);
      }
    }
  }
  queue<pair<int,int>>q;
  q.push({n-1,c});
  // visited[n-1][c]=true;
  while(!q.empty()){
    pair<int,int>current=q.front();
    q.pop();
    if(visited[current.first][current.second])continue;
    visited[current.first][current.second]=true;
    for(int i=0;i<sizeof(dh)/sizeof(int);++i){
      int nh=current.first+dh[i];
      int nw=current.second+dw[i];
      if(nh<0||nh>=n||nw<0||nw>=n)continue;
      if(visited[nh][nw])continue;
      if(v[nh][nw]=='.'){
        q.push({nh,nw});
      }
      else{
        int cnt=fw[nw].sum(nh+1,n);
        if(cnt==0){
          q.push({nh,nw});
          v[nh][nw]='.';
          fw[nw].add(nh,-1);
        }
      }
    }
  }
  #if _DEBUG
  io.write("visited:\n");
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      io.write(visited[i][j]?'1':'0');
    }
    io.writeln("");
  }
  io.writeln("");
  #endif
  for(int i=0;i<n;++i){
    io.write(visited[0][i]?'1':'0');
  }
  io.writeln("");
}
signed main() {
  int t;
  io.read(t);
  while(t--){
    solve();
  }
  return 0;
}
