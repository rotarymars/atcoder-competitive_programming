#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>a(n),b(n),c(n);
  for(auto&i:a){
    cin>>i;
  }
  for(auto&i:b){
    cin>>i;
  }
  for(auto&i:c){
    cin>>i;
  }
  sort(a.begin(),a.end());
  vector<int>d;
  for(int i=0;i<n;++i){
    d.push_back(b[c[i]-1]);
  }
  sort(d.begin(),d.end());
  long long ans=0;
  for(int i=0;i<n;++i){
    ans+=distance(lower_bound(d.begin(),d.end(),a[i]),upper_bound(d.begin(),d.end(),a[i]));
  }
  cout<<ans<<endl;
  return 0;
}
