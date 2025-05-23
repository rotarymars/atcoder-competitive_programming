#include <iostream>
#include <string>
#include <regex>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  regex r("^.*R.*K.*R.*$");
  auto it=find(s.begin(),s.end(),'B');
  auto itt=find(it+1,s.end(),'B');
  if(regex_match(s,r) && ((distance(s.begin(),it)^distance(s.begin(),itt))&1)){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
  return 0;
}
