#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<string>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  set<string>se;
  for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
    if(i==j)continue;
    string s=v[i]+v[j];
    se.insert(s);
   }
  }
  cout<<se.size()<<'\n';
  return 0;
}
