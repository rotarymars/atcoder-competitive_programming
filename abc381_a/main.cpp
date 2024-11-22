#include <iostream>
#include <string>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  int n;
  string s;
  cin>>n>>s;
  if(n%2==0){
    cout<<"No\n";
    return 0;
  }
  for(int i=0;i<n/2;i++){
    if(s[i]!='1'){
      cout<<"No\n";
      return 0;
    }
  }
  if(s[n/2]!='/'){
    cout<<"No\n";
    return 0;
  }
  for(int i=n/2+1;i<n;i++)if(s[i]!='2'){
    cout<<"No\n";
    return 0;
  }
  cout<<"Yes\n";
	return 0;
}

