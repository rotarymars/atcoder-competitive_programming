#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
#define int long long
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto&i:v){
    cin>>i;
  }
  int sum=accumulate(v.begin(),v.end(),0ll);
  long long ans=0;
  for(int i=0;i<n;++i){
    ans+=v[i]*(sum-=v[i]);
  }
  cout<<ans<<'\n';
  return 0;
}
