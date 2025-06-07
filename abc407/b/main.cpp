#include <iostream>
#include <iomanip>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int x,y;
  cin>>x>>y;
  int cnt=0;
  for(int i=1;i<=6;++i){
    for(int j=1;j<=6;++j){
      if(i+j>=x||abs(i-j)>=y)++cnt;
    }
  }
  cout<<fixed<<setprecision(10)<<(long double)cnt/36.0<<endl;
  return 0;
}
