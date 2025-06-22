#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>&v){
  bool first=true;
  for(auto&i:v){
    if(!first)cout<<' ';
    cout<<i;
    first=false;
  }
  cout<<'\n';
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto&i:v){
    cin>>i;
  }
  for(int i=0;i<n-1;++i){
    int now=0;
    vector<int>v2;
    for(int j=i;j<n-1;++j){
      v2.push_back(now+=v[j]);
    }
    print(v2);
  }
  return 0;
}
