#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,k;
  cin>>n>>k;
  vector<int>v(n);
  for(auto&i:v)cin>>i;
  sort(v.begin(),v.end());
  cout<<accumulate(v.begin(),next(v.begin(),k),0)<<endl;
  return 0;
}
