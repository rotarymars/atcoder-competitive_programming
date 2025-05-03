#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,x;
  cin>>n>>x;
  vector<int>v(n);
  for(auto&i:v){
    cin>>i;
  }
  sort(v.begin(),v.end());
  for(int i=0;i<n;++i){
    if(x>=v[i]){
      x-=v[i];
    } 
    else{
      cout<<i<<endl;
      return 0;
    }
  }
  cout<<(x==0?n:n-1)<<endl;
  return 0;
}
