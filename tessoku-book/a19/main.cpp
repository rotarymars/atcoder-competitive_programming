#include <iostream>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,w;
  cin>>n>>w;
  vector<vector<long long>>dp(n+1,vector<long long>(w+1,-1));
  dp[0][0]=0;
  for(int i=0;i<n;++i){
    long long weight,value;
    cin>>weight>>value;
    for(int j=0;j<=w;++j){
      if(dp[i][j]==-1){
        continue;
      }
      if(j+weight<=w){
        dp[i+1][j+weight]=max(dp[i+1][j+weight],dp[i][j]+value);
      }
      dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
    }
  }
  long long ans=0;
  for(int i=0;i<=w;++i){
    ans=max(ans,dp[n][i]);
  }
  cout<<ans<<endl;
  return 0;
}
