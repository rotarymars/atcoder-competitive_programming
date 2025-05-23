#include <iostream>
#include <utility>
#include <set>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  set<pair<int,int>>se;
  int cnt=0;
  for(int i=0;i<m;++i){
    pair<int,int>p;
    cin>>p.first>>p.second;
    if(p.first>p.second){
      swap(p.first,p.second);
    }
    if(se.contains(p)||p.first==p.second){
      ++cnt;
    }
    else{
      se.insert(p);
    }
  }
  cout<<cnt<<endl;
  return 0;
}
