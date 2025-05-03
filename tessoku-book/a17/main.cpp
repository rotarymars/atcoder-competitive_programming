#include <ios>
#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>a(n-1),b(n-2);
  for(auto&i:a)cin>>i;
  for(auto&i:b)cin>>i;
  vector<int>dp(n,INT_MAX);
  dp[0]=0;
  for(int i=0;i<n;++i){
    if(i+1<n)dp[i+1]=min(dp[i+1],dp[i]+a[i]);
    if(i+2<n)dp[i+2]=min(dp[i+2],dp[i]+b[i]);
  }
  vector<int>path;
  int now=n-1;
  while(true){
    path.push_back(1+now);
    if(now==0){
      break;
    }
    if(now-1>=0&&dp[now-1]+a[now-1]==dp[now]){
      --now;
    }
    else if(now-2>=0&&dp[now-2]+b[now-2]==dp[now]){
      now-=2;
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
