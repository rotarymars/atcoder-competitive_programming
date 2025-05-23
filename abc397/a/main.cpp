#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long double a;
  cin>>a;
  if(38.0<=a){
    cout<<"1\n";
  }
  else if(37.5<=a){
    cout<<"2\n";
  }
  else cout<<"3\n";
  return 0;
}
