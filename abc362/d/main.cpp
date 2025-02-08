#include <iostream>
#include <queue>
#include <climits>
#include <utility>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  vector<long long>edge(n);
  for(auto&i:edge){
    cin>>i;
  }
  vector<vector<pair<int,long long>>>path(n);//{to,weight}
  for(int i=0;i<m;++i){
    int u,v;
    long long weight;
    cin>>u>>v>>weight;
    --u,--v;
    path[u].emplace_back(make_pair(v,weight));
    path[v].emplace_back(make_pair(u,weight));
  }
  vector<long long>dist(n,LLONG_MAX);
  auto sortbysecond=[](const pair<int,long long>&a,const pair<int,long long>&b)->bool{
    return a.second>b.second;
  };
  dist[0]=edge[0];
  priority_queue<pair<int,long long>,vector<pair<int,long long>>,decltype(sortbysecond)>dijkstra(sortbysecond);
  dijkstra.push(make_pair(0,dist[0]));
  while(!dijkstra.empty()){
    int now=dijkstra.top().first;
    long long cost=dijkstra.top().second;
    dijkstra.pop();
    if(dist[now]<cost){
      continue;
    }
    for(const auto&i:path[now]){
      if(dist[i.first]>cost+i.second+edge[i.first]){
        dist[i.first]=cost+i.second+edge[i.first];
        dijkstra.push(make_pair(i.first,dist[i.first]));
      }
    }
  }
  for(int i=1;i<n;++i){
    if(i==1)[[unlikely]]{
      cout<<dist[i];
    }
    else{
      cout<<' '<<dist[i];
    }
  }
  cout<<endl;
  return 0;
}
