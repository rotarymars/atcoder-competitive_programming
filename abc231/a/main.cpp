#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long double x;
  cin>>x;
  cout<<fixed<<setprecision(10)<<x/100.0<<endl;
  return 0;
}
