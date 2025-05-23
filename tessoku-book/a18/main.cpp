#include <iostream>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,s;
  cin>>n>>s;
  vector<int>a(n);
  for(auto&i:a)cin>>i;
  vector<vector<bool>>dp(n+1,vector<bool>(s+1,false));
  dp[0][0]=true;
  for(int i=0;i<n;++i){
    for(int j=0;j<=s;++j){
      if(!dp[i][j]){
        continue;
      }
      dp[i+1][j]=true;
      if(j+a[i]<=s){
        dp[i+1][j+a[i]]=true;
      }
    }
  }
  cout<<(dp[n][s]?"Yes":"No")<<endl;
  return 0;
}
