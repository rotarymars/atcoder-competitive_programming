#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto&i:v){
    cin>>i;
  }
  int ans=0;
  for(int i=0;i<n;i+=2){
    ans+=v[i];
  }
  cout<<ans<<endl;
  return 0;
}
