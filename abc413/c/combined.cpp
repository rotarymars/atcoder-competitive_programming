#include <iostream>
#include <queue>
#include <utility>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int q;
  cin>>q;
  queue<pair<long long,long long>>que;
  for(;q--;){
    int t;
    cin>>t;
    if(t==1){
      long long c,x;
      cin>>c>>x;
      que.push(make_pair(x,c));
    }
    else{
      long long k;
      cin>>k;
      long long ans=0;
      while(k>0){
        if(que.front().second<=k){
          ans+=que.front().first*que.front().second;
          k-=que.front().second;
          que.pop();
        }
        else{
          ans+=que.front().first*k;
          que.front().second-=k;
          k=0;
        }
      }
      cout<<ans<<'\n';
    }
  }
  return 0;
}