#include <template/fastio.hpp>
#include <map>
#include <set>
#include <vector>
using namespace std;
FastIO io;
void solve() {
  long long n;
  io.read(n);
  map<int,set<int>>mp; // val, idx
  vector<int>v(n);
  for(int i=0;i<n;++i){
    int a;
    io.read(a);
    v[i]=a;
    mp[a].insert(i);
  }
  long long ans=0;
  int current_max=mp.begin()->first;
  auto it=mp.begin();
  while(true){
    if(it==mp.end())break;
    current_max=it->first;
    for(auto idx:it->second){
      if(idx>0&&v[idx-1]-v[idx]>1){
        int diff=v[idx-1]-v[idx]-1;
        ans+=diff;
        mp[v[idx-1]].erase(idx-1);
        v[idx-1]=v[idx]+1;
        mp[v[idx-1]].insert(idx-1);
      }
      if(idx<n-1&&v[idx+1]-v[idx]>1){
        int diff=v[idx+1]-v[idx]-1;
        ans+=diff;
        mp[v[idx+1]].erase(idx+1);
        v[idx+1]=v[idx]+1;
        mp[v[idx+1]].insert(idx+1);
      }
    }
    it=mp.upper_bound(current_max);
  }
  io.writeln(ans);
}
signed main() {
  int t;
  io.read(t);
  while(t--){
    solve();
  }
  return 0;
}
