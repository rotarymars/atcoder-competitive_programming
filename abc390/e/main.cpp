#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;
struct vitamins{
  int one,two,three;
};
bool operator==(vitamins a,vitamins b){
  return a.one==b.one&&a.two==b.two&&a.three==b.three;
}
#define _DEBUG
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,x;
  cin>>n>>x;
  vector<pair<int,pair<int,int>>>v(n);
  for(auto&i:v){
    cin>>i.second.first>>i.second.second>>i.first;
  }
  vector<vector<vitamins>>dp(n+1,vector<vitamins>(x+1,{-1,-1,-1}));
  dp[0][0]={0,0,0};
  for(int i=0;i<n;++i){
    for(int j=0;j<=x;++j){
      if(dp[i][j]==vitamins{-1,-1,-1})continue;
      int one=dp[i][j].one;
      int two=dp[i][j].two;
      int three=dp[i][j].three;
      dp[i+1][j]={one,two,three};
      if(j+v[i].first<=x){
        int nextone=dp[i+1][j+v[i].first].one;
        int nexttwo=dp[i+1][j+v[i].first].two;
        int nextthree=dp[i+1][j+v[i].first].three;
        if(v[i].second.first==1){
          one+=v[i].second.second;
        }
        else if(v[i].second.first==2){
          two+=v[i].second.second;
        }
        else{
          three+=v[i].second.second;
        }
        int nowmin=min({one,two,three});
        int nextmin=min({nextone,nexttwo,nextthree});
        if(nowmin>nextmin){
          dp[i+1][j+v[i].first]={one,two,three};
        }
      }
    }
  }
  int ans=-1;
  for(int i=0;i<=x;++i){
    ans=max(ans,min({dp[n][i].one,dp[n][i].two,dp[n][i].three}));
  }
  #ifdef _DEBUG
  for(int i=0;i<=n;++i){
    for(int j=0;j<=x;++j){
      cout<<"{"<<dp[i][j].one<<","<<dp[i][j].two<<","<<dp[i][j].three<<"} ";
    }
    cout<<endl;
  }
  #endif
  cout<<ans<<endl;
  return 0;
}
