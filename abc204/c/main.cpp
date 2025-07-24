#include <iostream>
#include <queue>
#include <set>
#include <map>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  map<int,set<int>>mp;
  for(int i=0;i<m;++i){
    int a,b;
    cin>>a>>b;
    mp[a].insert(b);
  }
  int ans=0;
  for(int i=1;i<=n;++i){
    set<int>already;
    queue<int>que;
    que.push(i);
    already.insert(i);
    while(!que.empty()){
      int now=que.front();
      que.pop();
      for(auto next:mp[now]){
        if(already.contains(next))continue;
        already.insert(next);
        que.push(next);
      }
    }
    ans+=already.size();
  }
  cout<<ans<<endl;
  return 0;
}
