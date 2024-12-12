#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long double x;
  cin>>x;
  cout<<fixed<<setprecision(10)<<sqrt(x*(12800000+x))<<endl;
  return 0;
}
