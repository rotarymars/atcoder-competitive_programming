#include <iostream>
#include <climits>
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
    mp[a].push_back(i);
  }
  int minlen=INT_MAX;
  for(auto&i:mp){
    if(i.second.size()<=1){
      continue;
    }
    for(int j=1;j<(int)i.second.size();++j){
      minlen=min(minlen,i.second[j]-i.second[j-1]);
    }
  }
  cout<<(minlen==INT_MAX?-1:minlen+1)<<endl;
  return 0;
}
