#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  int n;
  string s;
  cin>>n>>s;
  int ans=1;
  for(int i=0;i<n;i++) {
    if(s[i]!='/')continue;
    for(int j=1;;++j){
      int lind=i-j,rind=i+j;
      if(0<=lind&&lind<n&&0<=rind&&rind<n){
        if(s[lind]=='1'&&s[rind]=='2')continue;
        goto calc;
      }
calc:
      ans=max(ans,2*(j-1)+1);
      break;
    }
  }
  cout<<ans<<endl;
	return 0;
}

