#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n,m;
  cin>>n>>m;
  vector<vector<char>>v(2*n,vector<char>(m));
  for(auto&i:v){
    for(auto&j:i){
      cin>>j;
    }
  }
  vector<pair<int,int>>stats(2*n);
  for(int i=0;i<2*n;++i){
    stats[i].first=0;
    stats[i].second=i;
  }
  for(int i=0;i<m;++i){
    for(int j=0;j<n;++j){
      if(v[stats[2*j].second][i]==v[stats[2*j+1].second][i]){
        continue;
      }
      else if(v[stats[2*j].second][i]=='P'&&v[stats[2*j+1].second][i]=='G'){
        ++stats[2*j].first;
      }
      else if(v[stats[2*j].second][i]=='G'&&v[stats[2*j+1].second][i]=='C'){
        ++stats[2*j].first;
      }
      else if(v[stats[2*j].second][i]=='C'&&v[stats[2*j+1].second][i]=='P'){
        ++stats[2*j].first;
      }
      else {
        ++stats[2*j+1].first;
      }
    }
    sort(stats.begin(),stats.end(),[](const pair<int,int>&a,const pair<int,int>&b){
      if(a.first!=b.first)return a.first>b.first;
      return a.second<b.second;
    });
  }
  for(auto&i:stats){
    cout<<i.second+1<<'\n';
  }
  return 0;
}
