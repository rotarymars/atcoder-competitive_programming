#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int ans=0;
  for(;n--;){
    int a,b;
    cin>>a>>b;
    if(a<b)++ans;
  }
  cout<<ans<<'\n';
  return 0;
}
