#include <iostream>
#include <iomanip>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  long double va,vb,l;
  cin>>n>>va>>vb>>l;
  while(n--) {
    long double time=l/va;
    l=time*vb;
  }
  cout<<fixed<<setprecision(10)<<l<<endl;
  return 0;
}
