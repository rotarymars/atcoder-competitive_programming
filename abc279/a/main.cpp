#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int ans=0;
  char c;
  while(cin>>c){
    if(c=='v'){
      ++ans;
    }
    else if(c=='w'){
      ans+=2;
    }
  }
  cout<<ans<<endl;
  return 0;
}
