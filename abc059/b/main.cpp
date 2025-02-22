#include <iostream>
#include <string>
#include <utility>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s,t;
  cin>>s>>t;
  if(s.size()!=t.size()){
    cout<<(s.size()>t.size()?"GREATER":"LESS")<<endl;
  }
  else if(s>t){
    cout<<"GREATER"<<endl;
  }
  else if(s<t){
    cout<<"LESS"<<endl;
  }
  else{
    cout<<"EQUAL"<<endl;
  }
  return 0;
}
