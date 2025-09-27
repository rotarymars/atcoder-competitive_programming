#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin>>n;
  vector<set<int>>v(n);
  vector<int>zeros;
  for(int i=0;i<n;++i){
    int a,b;
    cin>>a>>b;
    if(a==0&&b==0){
      zeros.push_back(i);
    }
    else {
      v[--a].insert(i);
      v[--b].insert(i);
    }
  }
  set<int>ans;
  queue<int>que;
  for(auto it=zeros.begin();it!=zeros.end();++it){
    que.push(*it);
  }
  while(!que.empty()){
    auto now=que.front();
    que.pop();
    if(ans.contains(now)){
      continue;
    }
    ans.insert(now);
    for(auto it=v[now].begin();it!=v[now].end();++it){
      que.push(*it);
    }
  }
  cout<<ans.size()<<endl;
  return 0;
}
