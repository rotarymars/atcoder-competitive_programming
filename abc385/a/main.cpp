#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  vector<int>v(3);
  for(auto&i:v)cin>>i;
  sort(v.begin(),v.end());
  if((v[0]==v[1]&&v[1]==v[2])||v[0]+v[1]==v[2])cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
