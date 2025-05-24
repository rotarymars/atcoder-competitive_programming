#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h,w;
  cin>>h>>w;
  vector<vector<bool>>v(h,vector<bool>(w,false));
  char c;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>>c;
      if(c=='#'){
        v[i][j]=true;
      }
    }
  }
  vector<vector<long long>>dp(h,vector<long long>(w,0));
  dp[0][0]=1;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      if(v[i][j]){
        continue;
      }
      if(i-1>=0&&!v[i-1][j]){
        dp[i][j]+=dp[i-1][j];
      }
      if(j-1>=0&&!v[i][j-1]){
        dp[i][j]+=dp[i][j-1];
      }
    }
  }
  cout<<dp[h-1][w-1]<<endl;
  return 0;
}