#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  unordered_map<int,unordered_set<int>>mp;
  for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    mp[a].insert(b);
    mp[b].insert(a);
  }
  unordered_set<int>se;
  int now=1;
  while(true){
    if(mp[now].size()!=2){
      break;
    }
    int befsize=se.size();
    for(auto&i:mp[now]){
      if(se.contains(i)){
        continue;
      }
      se.insert(i);
      now=i;
      break;
    }
    if(se.size()==befsize){
      break;
    }
  }
  if(se.size()==n){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
  return 0;
}
