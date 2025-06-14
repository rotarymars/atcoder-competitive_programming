#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int r,x;
  cin>>r>>x;
  if((x==1&&1600<=r&&r<=2999)||(x==2&&1200<=r&&r<=2399))cout<<"Yes\n";
  else cout<<"No\n";
  return 0;
}
