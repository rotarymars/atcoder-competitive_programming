#include <iostream>
#include <vector>
#include <string>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  vector<int>v;
  for(int i=0;i<(int)s.size();++i){
    if(s[i]=='#')v.push_back(1+i);
  }
  for(int i=0;i<(int)v.size()/2;++i){
    cout<<v[i*2]<<','<<v[i*2+1]<<'\n';
  }
  return 0;
}
