#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  int ans=0;
  for(int i=0;i<(int)s.size();++i){
    for(int j=i+1;j<(int)s.size();++j){
      for(int k=j+1;k<(int)s.size();++k){
        if(k-j==j-i&&s[i]=='A'&&s[j]=='B'&&s[k]=='C'){
          ++ans;
        }
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
