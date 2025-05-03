#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  for(auto&i:s){
    if(i=='O'){
      i='0';
    }
    else if(i=='D'){
      i='0';
    }
    else if(i=='I'){
      i='1';
    }
    else if(i=='Z'){
      i='2';
    }
    else if(i=='S'){
      i='5';
    }
    else if(i=='B'){
      i='8';
    }
  }
  cout<<s<<endl;
  return 0;
}
