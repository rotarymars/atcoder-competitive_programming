#include <iostream>
#include <map>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  map<int,vector<int>>mp;
  for(int i=0;i<n;++i){
    int a;
    cin>>a;
    mp[a].push_back(i+1);
  }
  int maxind=-1,maxnum=-1;
  for(auto&i:mp){
    if(i.second.size()==1&&i.first>maxnum){
      maxnum=i.first;
      maxind=i.second.front();
    }
  }
  cout<<maxind<<endl;
  return 0;
}
