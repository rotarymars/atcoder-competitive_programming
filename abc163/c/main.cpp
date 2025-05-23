#include <iostream>
#include <map>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  map<int,int>mp;
  for(int i=0;i<n-1;++i){
    int a;
    cin>>a;
    ++mp[a];
  }
  for(int i=1;i<=n;++i){
    cout<<mp[i]<<'\n';
  }
  return 0;
}
