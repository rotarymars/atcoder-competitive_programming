#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  vector<int>a(n),b(m);
  for(auto&i:a){
    cin>>i;
  }
  for(auto&i:b){
    cin>>i;
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  int alast=n-1,blast=m-1;
  long long ans=0;
  while(true){
    if(alast<0){
      break;
    }
    if(a[alast]>=0){
      ans+=a[alast];
      --alast;
      if(blast>=0)if(b[blast]>=0){
        ans+=b[blast];
        --blast;
      }
    }
    else {
      if(blast<0){
        break;
      }
      if(-a[alast]<b[blast]){
        ans+=a[alast];
        --alast;
        ans+=b[blast];
        --blast;
      }
      else break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
