#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  if(n<100){
    cout<<"0"<<endl;
    return 0;
  }
  vector<bool>dp(n+1,false);
  dp[0]=true;
  for(int i=0;i<n;++i){
    if(!dp[i]){
      continue;
    }
    for(int j=0;j<=5;++j){
      if(i+100+j>n){
        continue;
      }
      dp[i+100+j]=true;
    }
  }
  cout<<(dp[n]?"1":"0")<<endl;
  return 0;
}
