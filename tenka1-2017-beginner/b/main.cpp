#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<pair<int,int>>v(n);
  for(auto&i:v){
    cin>>i.first>>i.second;
  }
  auto it=max_element(v.begin(),v.end());
  cout<<it->first+it->second<<endl;
  return 0;
}
