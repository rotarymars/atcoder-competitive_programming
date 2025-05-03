#include <iostream>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  constexpr int maxsize=10100;
  vector<vector<bool>>dp(1+n,vector<bool>(maxsize,false));
  vector<int>s(n);
  for(auto&i:s)cin>>i;
  dp[0][0]=true;
  for(int i=0;i<n;++i){
    for(int j=0;j<maxsize;++j){
      if(dp[i][j]){
        dp[i+1][j]=true;
        if(j+s[i]<maxsize)dp[i+1][j+s[i]]=true;
      }
    }
  }
  int ans=-1;
  for(int i=0;i<maxsize;++i){
    if(dp[n][i]){
      if(i%10==0)ans=max(ans,0);
      else ans=max(ans,i);
    }
  }
  cout<<ans<<endl;
  return 0;
}
