#include <iostream>
#include <climits>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin>>n;
  vector<long long>s(n),t(n);
  for(auto&i:s){
    cin>>i;
  }
  for(auto&i:t){
    cin>>i;
  }
  vector<long long>ans(n,LLONG_MAX);
  for(int i=0;i<n;++i){
    ans[i]=min(ans[i],t[i]);
  }
  for(int i=1;i<=n;++i){
    ans[i%n]=min(ans[i%n],ans[i-1]+s[i-1]);
  }
  for(int i=1;i<=n;++i){
    ans[i%n]=min(ans[i%n],ans[i-1]+s[i-1]);
  }
  for(int i=1;i<=n;++i){
    ans[i%n]=min(ans[i%n],ans[i-1]+s[i-1]);
  }
  for(auto&i:ans){
    cout<<i<<'\n';
  }
  return 0;
}
