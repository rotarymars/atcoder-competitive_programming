#include <iostream>
#include <climits>
#include <set>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  vector<vector<pair<int,long long>>>paths(n);//{to,weight}
  for(int i=0;i<m;++i){
    int u,v;
    long long w;
    cin>>u>>v>>w;
    --u,--v;
    paths[u].emplace_back(make_pair(v,w));
    paths[v].emplace_back(make_pair(u,w));
  }
  queue<pair<set<int>,pair<int,long long>>>que; //{visited,{now,weight}}
  que.push({set<int>({0}),{0,0}});
  long long ans=LLONG_MAX;
  while(!que.empty()){
    auto top=que.front();
    que.pop();
    if(top.second.first==n-1){
      ans=min(ans,top.second.second);
      continue;
    }
    for(auto&i:paths[top.second.first]){
      if(!top.first.contains(i.first)){
        auto cp=top.first;
        cp.insert(i.first);
        que.push({cp,{i.first,i.second^top.second.second}});
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
