#include <iostream>
#include <string>
#include <regex>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s,t;
  cin>>s>>t;
  for(char&i:s){
    if(i=='?'){
      i='.';
    }
  }
  for(int i=0;i<(int)(s.size()-t.size()+1);++i){
    if(regex_match(t,regex(s.substr(i,t.size())))){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  cout<<"No"<<endl;
  return 0;
}
