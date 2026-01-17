#include <template/fastio.hpp>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
struct stat{
  long long current_cost;
  int used_edges;
  int current_edge;
};
signed main() {
  FastIO io;
  int n,m,l;
  long long s,t;
  io.read(n,m,l,s,t);
  map<int,map<int,vector<long long>>>mp;
  for(int i=0;i<m;++i){
    int u,v;
    long long c;
    io.read(u,v,c);
    --u,--v;
    mp[u][v].push_back(c);
  }
  queue<stat>q;
  q.push({0,0,0});
  vector<int>ans;
  while(!q.empty()){
    stat now=q.front();
    q.pop();
    if(now.used_edges==l&&s<=now.current_cost&&now.current_cost<=t){
      ans.push_back(now.current_edge+1);
      continue;
    }
    else if(now.used_edges>l){
      continue;
    }
    for(auto&[nxt,costs]:mp[now.current_edge]){
      for(auto& cost:costs) {
        q.push({now.current_cost+cost,now.used_edges+1,nxt});
      }
    }
  }
  sort(ans.begin(),ans.end());
  ans.erase(unique(ans.begin(),ans.end()),ans.end());
  io.write(ans,'\n');
  return 0;
}
