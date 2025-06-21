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
  k=n-k;
  for(int i=k;i<n;++i){
    if(i!=k)cout<<' ';
    cout<<v[i];
  }
  for(int i=0;i<k;++i){
    cout<<' '<<v[i];
  }
  cout<<endl;
  return 0;
}
