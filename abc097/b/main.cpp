#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int x;
  cin>>x;
  int ans=1;
  for(int i=2;i*i<=x;++i){
    int temp=i*i;
    ans=max(ans,temp);
    while(temp*i<=x){
      temp*=i;
      ans=max(ans,temp);
    }
  }
  cout<<ans<<endl;
  return 0;
}
