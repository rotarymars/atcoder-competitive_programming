#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  if(a>c)cout<<"Yes\n";
  else if(a<c)cout<<"No\n";
  else if(b>d)cout<<"Yes\n";
  else cout<<"No\n";
  return 0;
}
