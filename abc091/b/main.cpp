#include <template/fastio.hpp>
#include <map>
using namespace std;
signed main() {
  FastIO io;
  int n,m;
  io.read(n);
  map<string,int>mp;
  for(;n--;){
    string s;
    io.read(s);
    ++mp[s];
  }
  io.read(m);
  for(;m--;){
    string s;
    io.read(s);
    --mp[s];
  }
  int ans=0;
  for(auto&i:mp){
    ans=max(ans,i.second);
  }
  io.write(ans,'\n');
  return 0;
}
