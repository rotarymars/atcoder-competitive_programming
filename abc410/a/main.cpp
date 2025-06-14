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
  int k;
  cin>>k;
  int ans=0;
  for(auto&i:v){
    if(i>=k){
      ans++;
    }
  }
  cout<<ans<<endl;
  return 0;
}
