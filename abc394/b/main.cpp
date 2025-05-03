#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
bool comp(string s, string t){
  return s.size()<t.size();
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<string>v(n);
  for(auto&i:v){
    cin>>i;
  }
  sort(v.begin(),v.end(),comp);
  string ans="";
  for(auto&i:v){
    ans+=i;
  }
  cout<<ans<<endl;
  return 0;
}
