#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long a;
  cin>>a;
  constexpr signed long long lim=1ll<<31;
  if(-lim<=a&&a<lim){
    cout<<"Yes\n";
  }
  else{
    cout<<"No\n";
  }
  return 0;
}
