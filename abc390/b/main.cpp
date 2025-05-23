#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<long double>v(n);
  for(auto&i:v){
    cin>>i;
  }
  long double diff=v[1]/v[0];
  for(int i=0;i<n-1;++i){
    if(v[i+1]/v[i]!=diff){
      cout<<"No\n";
      return 0;
    }
  }
  cout<<"Yes\n";
  return 0;
}
