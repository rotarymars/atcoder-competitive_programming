#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,a,x,y;
  cin>>n>>a>>x>>y;
  if(n>a)cout<<a*x+(n-a)*y<<endl;
  else cout<<n*x<<endl;
  return 0;
}