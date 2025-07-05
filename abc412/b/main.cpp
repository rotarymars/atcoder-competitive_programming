#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s,t;
  cin>>s>>t;
  for(auto i=++s.begin();i!=s.end();++i){
    if(isupper(*i)){
      if(t.find(*(i-1))==string::npos){
        cout<<"No\n";
        return 0;
      }
    }
  }
  cout<<"Yes\n";
  return 0;
}
