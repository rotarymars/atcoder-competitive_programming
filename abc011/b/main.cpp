#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  bool first=true;
  for(auto&i:s){
    if(first)[[unlikely]]{
      if(islower(i))i^=32;
      first=false;
    }
    else {
      if(isupper(i))i^=32;
    }
  }
  cout<<s<<endl;
  return 0;
}
