#include <iostream>
#include <utility>
#include <set>
#include <vector>
using namespace std;
// #define _DEBUG
bool strictlysuperior(pair<int,set<int>>a,pair<int,set<int>>b){
  bool ret=true;
  if(a.first<b.first){
    ret=false;
  }
  for(auto&i:a.second){
    if(!b.second.contains(i)){
      ret=false;
      break;
    }
  }
  if(!(a.first>b.first||a.second.size()<b.second.size())){
    ret=false;
  }
  return ret;
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  vector<pair<int,set<int>>>v(n);
  for(auto&i:v){
    int p,c;
    cin>>p>>c;
    set<int>se;
    for(int j=0;j<c;++j){
      int x;
      cin>>x;
      --x;
      se.insert(x);
    }
    i=make_pair(p,se);
  }
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      if(i==j){
        continue;
      }
      if(strictlysuperior(v[i],v[j])){
        #ifdef _DEBUG
        cout<<i<<' ' <<j<<endl;
        #endif
        cout<<"Yes\n";
        return 0;
      }
    }
  }
  cout<<"No\n";
  return 0;
}
