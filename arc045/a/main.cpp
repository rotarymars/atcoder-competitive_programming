#include <iostream>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s,ans{};
  while(cin>>s){
    if(s=="Left"){
      ans+='<';
    }
    else if(s=="Right"){
      ans+='>';
    }
    else if(s=="AtCoder"){
      ans+='A';
    }
  }
  for(int i=0;i<(int)ans.size();++i){
    if(i==0)[[unlikely]]{
      cout<<ans[i];
    }
    else{
      cout<<' '<<ans[i];
    }
  }
  cout<<endl;
  return 0;
}
