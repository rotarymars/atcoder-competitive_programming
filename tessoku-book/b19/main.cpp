#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,w;
  cin>>n>>w;
  vector<vector<long long>>dp(n+1,vector<long long>(1000*n+1,LLONG_MAX));
  dp[0][0]=0;
  for(int i=0;i<n;++i){
    long long weight,value;
    cin>>weight>>value;
    for(int j=0;j<=1000*n;++j){
      if(dp[i][j]==LLONG_MAX){
        continue;
      }
      dp[i+1][j]=min(dp[i+1][j],dp[i][j]);
      dp[i+1][j+value]=min(dp[i+1][j+value],dp[i][j]+weight);
    }
  }
  long long ans=-1;
  for(int i=0;i<=1000*n;++i){
    if(dp[n][i]<=w){
      ans=i;
    }
  }
  cout<<ans<<endl;
  return 0;
}
