#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<long long>v(n);
  for(auto&i:v){
    cin>>i;
  }
  long long mulnum=1,ans=0;
  for(int i=0;i<n;++i){
    ans+=v[n-1-i]*mulnum;
    mulnum*=2;
  }
  cout<<ans<<endl;
  return 0;
}
