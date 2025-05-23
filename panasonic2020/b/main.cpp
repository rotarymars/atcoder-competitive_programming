#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long a,b;
  cin>>a>>b;
  cout<<(a==1||b==1?1:(a*b+1)/2)<<endl;
  return 0;
}
