#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
long double ans=0;
void f(string s){
  int cnt=0;
  if(s[0]=='t'&&s.back()=='t'){
    for(int i=1;i<s.size()-1;++i){
      if(s[i]=='t'){
        ++cnt;
      }
    }
    ans=max(ans,(long double)cnt/(s.size()-2));
  }
  else return;
}
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  string s;
  cin>>s;
  for(int i=0;i<s.size();++i){
    for(int j=1;j<s.size()-i;++j){
      f(s.substr(i,j+1));
    }
  }
  cout<<fixed<<setprecision(10)<<ans<<'\n';
  return 0;
}
