#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  map<string,int>mp;
  int maxcnt=0;
  for(int i=0;i<n;++i){
    string s;
    cin>>s;
    maxcnt=max(maxcnt,++mp[s]);
  }
  vector<string>v;
  for(auto&i:mp){
    if(i.second==maxcnt)v.push_back(i.first);
  }
  sort(v.begin(),v.end());
  for_each(v.begin(),v.end(),[](string s)->void{cout<<s<<'\n';return;});
  return 0;
}