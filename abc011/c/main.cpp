#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// #define _DEBUG
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,ng1,ng2,ng3;
  cin>>n>>ng1>>ng2>>ng3;
  vector<int>dp(n+5,INT_MAX);
  dp[n]=0;
  if(ng1==n||ng2==n||ng3==n){
    cout<<"NO"<<endl;
    return 0;
  }
  for(int i=n;i>=0;--i){
    if(dp[i]==INT_MAX)continue;
    for(int j=1;j<=3;++j){
      if(i-j<0)break;
      if(i-j==ng1||i-j==ng2||i-j==ng3)continue;
      dp[i-j]=min(dp[i-j],dp[i]+1);
    }
  }
  if(dp[0]>100)cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
  #ifdef _DEBUG
  for(auto&i:dp){
    cout<<i<<' ';
  }
  cout<<endl;
  #endif
  return 0;
}
