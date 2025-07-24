#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int ans=0;
  for(int i=0;i<n;++i){
    int a;
    cin>>a;
    if(a>10)ans+=a-10;
  }
  cout<<ans<<endl;
  return 0;
}