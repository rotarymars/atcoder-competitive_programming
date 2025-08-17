#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  string s;
  cin>>s;
  if(s=="red"||s=="blue"||s=="green"){
    cout<<(s=="red"?"SSS":(s=="blue"?"FFF":"MMM"))<<endl;
  }
  else {
    cout<<"Unknown"<<endl;
  }
  return 0;
}
