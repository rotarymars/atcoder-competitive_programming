#include <iostream>
#include <climits>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  int l=-1,r=INT_MAX;
  for(int i=0;i<m;++i){
    int a,b;
    cin>>a>>b;
    l=max(l,a);
    r=min(r,b);
  }
  cout<<max(0,r-l+1)<<endl;
  return 0;
}
