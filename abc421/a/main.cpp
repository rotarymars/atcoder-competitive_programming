#include <iostream>
#include <vector>
#include <string>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin>>n;
  vector<string>s(n);
  for(auto&i:s){
    cin>>i;
  }
  int x;
  string ss;
  cin>>x>>ss;
  --x;
  cout<<(s[x]==ss?"Yes":"No")<<'\n';
  return 0;
}
