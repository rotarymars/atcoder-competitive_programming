#include <iostream>
#include <iomanip>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long double a,b;
  cin>>a>>b;
  cout<<fixed<<setprecision(10)<<(a-b)/3.0+b<<endl;
  return 0;
}
