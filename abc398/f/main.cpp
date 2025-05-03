#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>compute_prefix(const string&s){
  int n=s.size();
  vector<int>pi(n,0);
  for(int i=1;i<n;++i){
    int j=pi[i-1];
    while(j>0&&s[i]!=s[j])j=pi[j-1];
    if(s[i]==s[j]){
      ++j;
    }
    pi[i]=j;
  }
  return pi;
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  string r=s;
  reverse(r.begin(),r.end());
  string t=r+'a'+s;
  auto pi=compute_prefix(t);
  int l=pi[t.size()-1];
  string add=s.substr(0,s.size()-l);
  reverse(add.begin(),add.end());
  cout<<s+add<<'\n';
  return 0;
}