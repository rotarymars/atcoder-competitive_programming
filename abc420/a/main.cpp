#include <iostream>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int x,y;
  cin>>x>>y;
  cout<<(x+y>12?x+y-12:x+y)<<endl;
  return 0;
}
