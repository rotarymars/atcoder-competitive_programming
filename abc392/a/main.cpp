#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  vector<int>v(3);
  cin>>v[0]>>v[1]>>v[2];
  sort(v.begin(),v.end());
  if(v[0]*v[1]==v[2]){
    cout<<"Yes\n";
  }
  else{
    cout<<"No\n";
  }
  return 0;
}
