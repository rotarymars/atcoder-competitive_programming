#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;
#define int long long


signed main() {
  int n,m;
  cin>>n>>m;
  vector<vector<pair<int,int>>>graph(n);
  vector<int>x(m),y(m),z(m);
  for(int i=0;i<m;i++){
    cin>>x[i]>>y[i]>>z[i];
    --x[i],--y[i];
    graph[x[i]].emplace_back(y[i],z[i]);
    graph[y[i]].emplace_back(x[i],z[i]);
  }
  vector<int>a(n,-1);
  bool possible=true;
  for(int i=0;i<n;i++){
    if(a[i]==-1){
      vector<int>component;
      function<void(int,int)>dfs=[&](int node,int value){
        if(!possible)return;
        a[node]=value;
        component.push_back(node);
        for(auto[next,xor_value]:graph[node]){
          if(a[next]==-1){
            dfs(next,value^xor_value);
          }
          else if(a[next]!=(value^xor_value)){
            possible=false;
            return;
          }
        }
      };
      dfs(i,0);
      int min_value=*min_element(component.begin(),component.end(),[&](int x,int y){
        return a[x]<a[y];
      });
      for(int node:component){
        a[node]-=min_value;
      }
    }
  }
  if(!possible){
    cout<<-1<<endl;
  }
  else{
    for(int i=0;i<n;i++){
      if(i!=0)cout<<' ';
      cout<<a[i];
    }
    cout<<endl;
  }
  return 0;
}