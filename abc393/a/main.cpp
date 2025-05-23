#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s,t;
  cin>>s>>t;
  if(s=="sick"&&t=="sick"){
    cout<<"1\n";
  }
  else if(s=="sick"&&t=="fine"){
    cout<<"2\n";
  }
  else if(s=="fine"&&t=="sick"){
    cout<<"3\n";
  }
  else if(s=="fine"&&t=="fine"){
    cout<<"4\n";
  }
  return 0;
}
