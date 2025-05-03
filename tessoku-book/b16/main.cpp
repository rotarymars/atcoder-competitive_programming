#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>h(n);
  for(auto&i:h)cin>>i;
  vector<int>dp(n,INT_MAX);
  dp[0]=0;
  for(int i=0;i<n;++i){
    if(i+1<n){
      dp[i+1]=min(dp[i+1],dp[i]+abs(h[i+1]-h[i]));
    }
    if(i+2<n){
      dp[i+2]=min(dp[i+2],dp[i]+abs(h[i+2]-h[i]));
    }
  }
  cout<<dp[n-1]<<endl;
  return 0;
}
