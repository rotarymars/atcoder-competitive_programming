#include <iostream>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  long long k;
  cin>>n>>k;
  vector<long long>v(n);
  for(auto&i:v)cin>>i;
  for(int i=1;i<n;++i){
    v[i]=v[i]+v[i-1];
  }
  auto getsum=[&](int l,int r){
    if(l==0)return v[r];
    return v[r]-v[l-1];
  };
  long long ans=0;
  int lind=0,rind=0;
  while(lind<n){
    if(rind<n){
      if(getsum(lind,rind)<=k){
        ++rind;
        continue;
      }
    }
    ans+=rind-lind;
    ++lind;
  }
  cout<<ans<<endl;
  return 0;
}
