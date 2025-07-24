#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a,b;
  cin>>a>>b;
  cout<<(2*a+100-b>=0?2*a+100-b:0)<<'\n';
  return 0;
}
