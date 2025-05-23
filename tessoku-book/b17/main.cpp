#include <iostream>
#include <algorithm>
#include <climits>
#include <iterator>
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
  vector<int>path;
  int now=n-1;
  while(true){
    path.push_back(1+now);
    if(now==0){
      break;
    }
    bool modified=false;
    if(now-1>=0){
      if(dp[now-1]+abs(h[now]-h[now-1])==dp[now]){
        --now;
        modified=true;
      }
    }
    if(now-2>=0){
      if(dp[now-2]+abs(h[now]-h[now-2])==dp[now]&&!modified){
        now-=2;
      }
    }
  }
  reverse(path.begin(),path.end());
  cout<<path.size()<<'\n';
  for(int i=0;i<(int)path.size();++i){
    if(i==0)[[unlikely]]{
      cout<<path[i];
    }
    else{
      cout<<' '<<path[i];
    }
  }
  cout<<'\n';
  return 0;
}
