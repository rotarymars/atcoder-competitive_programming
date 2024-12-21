#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll=long long;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,k;
  cin>>n>>k;
  vector<int>v(n);
  for(auto&i:v)cin>>i;
  sort(v.begin(),v.end());
  int lind=0,rind=0;
  ll ans=0;
  while(lind<n){
    if(rind<n)if(v[rind]-v[lind]<=k){
      ++rind;
      continue;
    }
    ans+=rind-lind-1;
    ++lind;
  }
  cout<<ans<<endl;
  return 0;
}
