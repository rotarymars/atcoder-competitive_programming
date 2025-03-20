#include <iostream>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  long long n;
  cin>>n;
  long long cnt=0;
  for(long long i=1;i<=n;++i){
    for(long long j=1;j<=n;++j){
      for(long long k=1;k<=n;++k){
        if(i*j*k<=n){
          ++cnt;
        }
        if(i*j*k>n){
          break;
        }
      }
      if(i*j>n){
        break;
      }
    }
  }
  cout<<cnt<<endl;
  return 0;
}
