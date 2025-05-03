#include <iostream>
#include <string>
// #define _DEBUG
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  int ans=0;
  for(int i=0;i<(int)s.size();++i){
    if(i+1<(int)s.size()){
      if(s[i]==s[i+1]&&s[i]=='0'){
        ++i;
      }
    }
    #ifdef _DEBUG
    cout<<i<<endl;
    #endif
    ++ans;
  }
  cout<<ans<<endl;
  return 0;
}
