#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n,q;
  cin>>n>>q;
  vector<long long>v(n);
  for(auto&i:v){
    cin>>i;
  }
  vector<long long>doubled(2*n);
  for(int i=0;i<n;++i){
    doubled[i]=v[i];
    doubled[n+i]=v[i];
  }
  vector<long long>sum(2*n+1,0);
  for(int i=0;i<2*n;++i){
    sum[1+i]=sum[i]+doubled[i];
  }
  int index=0;
  for(int i=0;i<q;++i){
    int t;
    cin>>t;
    if(t==1){
      int c;
      cin>>c;
      index+=c;
      index%=n;
    }
    else{
      int l,r;
      cin>>l>>r;
      --l,--r;
      cout<<sum[1+r+index]-sum[l+index]<<'\n';
    }
  }
  return 0;
}
