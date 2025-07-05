#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<string>v;
vector<string> f(int n){
  if(n==1){
    return vector<string>{"a"s,"b"s,"c"s};
  }
  vector<string>v2=f(n-1);
  vector<string>v3;
  for(string s:v2){
    v3.push_back(s+"a"s);
    v3.push_back(s+"b"s);
    v3.push_back(s+"c"s);
  }
  return v3;
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<string>v=f(n);
  sort(v.begin(),v.end());
  for(string s:v){
    cout<<s<<'\n';
  }
  return 0;
}