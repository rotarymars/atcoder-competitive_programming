#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,k;
  cin>>n>>k;
  vector<int>v(n);
  for(auto&i:v){
    cin>>i;
  }
  for(int i=k;i<n;++i){
    if(v[i]>v[i-k]){
      cout<<"Yes\n";
    }
    else{
      cout<<"No\n";
    }
  }
  return 0;
}
