#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,l,r;
  cin>>n>>l>>r;
  int ans=0;
  for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    if(a<=l&&r<=b){
      ++ans;
    }
  }
  cout<<ans<<endl;
  return 0;
}
