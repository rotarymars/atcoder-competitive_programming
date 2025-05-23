#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long double r,d;
  cin>>r>>d;
  cout<<fixed<<setprecision(10)<<r*r*d*2*M_PI*M_PI<<endl;
  return 0;
}
