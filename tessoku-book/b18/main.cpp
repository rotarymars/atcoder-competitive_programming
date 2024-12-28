#include <iostream>
#include <algorithm>
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
  if(!dp[n][s]){
    cout<<"-1\n";
  }
  else{
    vector<int>chosen;
    int nowj=s,nowi=n;
    while(nowi>0){
      if(nowj-a[nowi-1]>=0){
        if(dp[nowi-1][nowj-a[nowi-1]]){
          chosen.push_back(nowi);
          nowj-=a[nowi-1];
        }
      }
      --nowi;
    }
    sort(chosen.begin(),chosen.end());
    cout<<chosen.size()<<'\n';
    for(int i=0;i<(int)chosen.size();++i){
      if(i==0)[[unlikely]]{
        cout<<chosen[i];
      }
      else{
        cout<<' '<<chosen[i];
      }
    }
    cout<<'\n';
  }
  return 0;
}