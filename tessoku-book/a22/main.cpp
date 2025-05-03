#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>a(n-1),b(n-1);
  for(auto&i:a){
    cin>>i;
  }
  for(auto&i:b){
    cin>>i;
  }
  vector<int>dp(n,INT_MIN);
  dp[0]=0;
  for(int i=0;i<n-1;++i){
    dp[a[i]-1]=max(dp[a[i]-1],dp[i]+100);
    dp[b[i]-1]=max(dp[b[i]-1],dp[i]+150);
  }
  cout<<dp.back()<<endl;
  return 0;
}
