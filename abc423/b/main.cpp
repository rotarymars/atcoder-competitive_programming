#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto&i:v)cin>>i;
  if(v==vector<int>(n,0)){
    cout<<0<<endl;
    return 0;
  }
  int ans=2;
  for(int i=0;i<n;++i){
    if(v[i]==0){
      ++ans;
    }
    else{
      break;
    }
  }
  for(int i=n-1;i>=0;--i){
    if(v[i]==0){
      ++ans;
    }
    else{
      break;
    }
  }
  cout<<n+1-ans<<endl;
  return 0;
}
