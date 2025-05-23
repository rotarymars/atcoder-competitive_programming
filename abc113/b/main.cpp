#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  long double t,a;
  cin>>n>>t>>a;
  vector<long double>v(n);
  for(auto&i:v){
    cin>>i;
    i=t-i*0.006;
    i=abs(i-a);
  }
  cout<<distance(v.begin(),min_element(v.begin(),v.end())+1)<<endl;
  return 0;
}
