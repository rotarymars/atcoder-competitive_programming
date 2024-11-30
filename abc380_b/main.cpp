#include <iostream>
#include <vector>
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  string s;
  cin>>s;
  vector<int>ans;
  int tmp=0;
  for(int i=1;i<s.size();i++){
    if(s[i]=='|'){
      ans.push_back(tmp);
      tmp=0;
      continue;
    }
    ++tmp;
  }
  for(int i=0;i<ans.size();i++){
    if(i==0)[[unlikely]]cout<<ans[i];
    else cout<<' '<<ans[i];
  }
  cout<<endl;
	return 0;
}

