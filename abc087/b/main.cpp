#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a,b,c,x;
  cin>>a>>b>>c>>x;
  int ans=0;
  for(int i=0;i<=a;++i){
    for(int j=0;j<=b;++j){
      for(int k=0;k<=c;++k){
        if(500*i+100*j+50*k==x){
          ++ans;
        }
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
