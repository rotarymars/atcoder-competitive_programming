#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int c=n%10;
  n/=10;
  int b=n%10;
  n/=10;
  int a=n%10;
  n/=10;
  cout<<100*b+10*c+a<<' '<<100*c+10*a+b<<endl;
  return 0;
}
