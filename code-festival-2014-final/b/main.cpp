#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  char c;
  int ans=0,posneg=1;
  while(cin>>c){
    int n=c-'0';
    ans+=n*posneg;
    posneg*=-1;
  }
  cout<<ans<<endl;
  return 0;
}
