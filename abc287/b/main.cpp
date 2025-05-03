#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  vector<string>v;
  set<string>se;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s.substr(s.size()-3,3));
  }
  for(int i=0;i<m;i++){
    string s;
    cin>>s;
    se.insert(s);
  }
  int ans=0;
  for(auto&i:v)ans+=se.contains(i);
  cout<<ans<<endl;
  return 0;
}
