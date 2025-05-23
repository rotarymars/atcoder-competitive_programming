#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int f(const vector<pair<int,int>>&v,int k){
  vector cp=v;
  int maxlen=-1,maxind=-1;
  for(int i=0;i<(int)v.size();++i){
    if(maxlen<v[i].first*(v[i].second+k)){
      maxlen=v[i].first*(v[i].second+k);
      maxind=i;
    }
  }
  return maxlen;
}
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,d;
  cin>>n>>d;
  vector<pair<int,int>>v(n);
  for(auto&i:v)cin>>i.first>>i.second;
  for(int i=1;i<=d;++i){
    cout<<f(v,i)<<'\n';
  }
  return 0;
}
