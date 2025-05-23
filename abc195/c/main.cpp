#include <iostream>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long n;
  cin>>n;
  long long ans=0;
  ans+=max(0ll,n-999);
  ans+=max(0ll,n-999999);
  ans+=max(0ll,n-999999999);
  ans+=max(0ll,n-999999999999);
  ans+=max(0ll,n-999999999999999);
  cout<<ans<<endl;
  return 0;
}
