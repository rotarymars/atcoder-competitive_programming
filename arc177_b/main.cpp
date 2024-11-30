#include <iostream>
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  int n;
  string s;
  cin>>n>>s;
  string ans="";
  for(int i=n-1;i>=0;--i){
    if(s[i]=='1'){
      for(int j=0;j<=i;++j)ans+='A';
      for(int j=0;j<i;++j)ans+='B';
    }
  }
  cout<<ans.size()<<'\n'<<ans<<'\n';
	return 0;
}

