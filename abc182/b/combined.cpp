#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;++i){
    cin>>v[i];
  }
  int maxcnt=-1;
  int ans=-1;
  const int maxv=*max_element(v.begin(),v.end());
  for(int i=2;i<=maxv;++i){
    int cnt=0;
    for(int j=0;j<n;++j){
      if(v[j]%i==0)++cnt;
    }
    if(cnt>maxcnt){
      ans=i;
      maxcnt=cnt;
    }
  }
  cout<<ans<<'\n';
  return 0;
}