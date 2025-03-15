#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  int ans=0;
  for(int i=0;i<(int)s.size()-1;++i){
    if(s[i]=='i'){
      if(s[i+1]!='o'){
        ++ans;
      }
    }
    else{
      if(i==0){
        ++ans;
        continue;
      }
      if(s[i-1]!='i'){
        ++ans;
      }
    }
  }
  if(s.back()=='o'&&s[(int)s.size()-2]!='i'){
    ++ans;
  }
  if(s.back()=='i'){
    ++ans;
  }
  cout<<ans<<endl;
  return 0;
}
