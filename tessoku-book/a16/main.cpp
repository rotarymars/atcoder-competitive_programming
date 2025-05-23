#include <ios>
#include <iostream>
#include <climits>
#include <vector>
using namespace std;
// #define _DEBUG
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>a(n-1),b(n-2);
  for(auto&i:a)cin>>i;
  for(auto&i:b)cin>>i;
  vector<int>dp(n,INT_MAX);
  dp[0]=0;
  for(int i=0;i<n;++i){
    if(i+1<n)dp[i+1]=min(dp[i+1],dp[i]+a[i]);
    if(i+2<n)dp[i+2]=min(dp[i+2],dp[i]+b[i]);
    #ifdef _DEBUG
    for(int i=0;i<n;++i){
      cout<<dp[i]<<' ';
    }
    #endif
  }
  cout<<dp[n-1]<<endl;
  return 0;
}
