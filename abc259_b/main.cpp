#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  long double x,y,d;
  cin>>x>>y>>d;
  d=d*M_PI/180;
  long double ncos=cos(d),nsin=sin(d);
  cout<<fixed<<setprecision(10)<<x*ncos-y*nsin<<' '<<x*nsin+y*ncos<<endl;
	return 0;
}

