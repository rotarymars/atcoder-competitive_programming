#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,k;
  cin>>n>>k;
  vector<int>a(n),b(n),c(n),d(n);
  for(auto&i:a)cin>>i;
  for(auto&i:b)cin>>i;
  for(auto&i:c)cin>>i;
  for(auto&i:d)cin>>i;
  vector<int>e,f;
  e.reserve(n*n);
  f.reserve(n*n);
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      e.push_back(a[i]+b[j]);
    }
  }
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      f.push_back(c[i]+d[j]);
    }
  }
  sort(e.begin(),e.end());
  sort(f.begin(),f.end());
  for(auto&i:e){
    if(*lower_bound(f.begin(),f.end(),k-i)==k-i){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  cout<<"No"<<endl;
  return 0;
}
