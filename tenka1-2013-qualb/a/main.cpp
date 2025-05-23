#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  vector<string>v;
  while(cin>>s){
    v.push_back(s);
  }
  sort(v.begin(),v.end());
  cout<<v[6]<<endl;
  return 0;
}
