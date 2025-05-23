#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto&i:v){
    cin>>i;
  }
  int rind=0;
  long long ans=0;
  for(int i=0;i<n;++i){
    top:
    if(2*v[i]>v[rind]&&rind<n){
      ++rind;
      goto top;
    }
    ans+=n-rind;
  }
  cout<<ans<<endl;
  return 0;
}
