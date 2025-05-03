#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long double a,b,h,m;
  cin>>a>>b>>h>>m;
  long double rad=abs(30.0*h+0.5*m-6*m)/360.0*2*M_PI;
  cout<<fixed<<setprecision(10)<<sqrt(a*a+b*b-2*a*b*cos(rad))<<endl;
  return 0;
}
