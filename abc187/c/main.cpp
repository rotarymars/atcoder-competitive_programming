#include <iostream>
#include <string>
#include <map>
#include <utility>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  map<string,pair<bool,bool>>mp;
  for(int i=0;i<n;++i){
    string s;
    cin>>s;
    if(s.front()=='!'){
      if(mp.contains(s.substr(1))){
        mp[s.substr(1)].first=true;
      }
      else{
        mp[s.substr(1)]=make_pair(true,false);
      }
    }
    else {
      if(mp.contains(s)){
        mp[s].second=true;
      }
      else {
        mp[s]=make_pair(false,true);
      }
    }
  }
  for(auto&i:mp){
    if(i.second.first&&i.second.second){
      cout<<i.first<<endl;
      return 0;
    }
  }
  cout<<"satisfiable\n";
  return 0;
}
