#include <iostream>
#include <template/ioutility.hpp>
#include <set>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w,c,q;
  cin>>h>>w>>c>>q;
  set<int>doneh,donew;
  vector<pair<int,pair<int,int>>>v(q);
  cin>>v;
  vector<long long>ans(c,0);
  for(auto it=v.rbegin();it!=v.rend();++it){
    if(it->first==1){
      if(donew.contains(it->second.first)){
        continue;
      }
      donew.insert(it->second.first);
      ans[it->second.second-1]+=w-doneh.size();
    }
    else{
      if(doneh.contains(it->second.first)){
        continue;
      }
      doneh.insert(it->second.first);
      ans[it->second.second-1]+=h-donew.size();
    }
  }
  cout<<ans<<endl;
  return 0;
}
