#include <template/fastio.hpp>
#include <utility>
using namespace std;
bool ok(const string &s){
  bool iso=true;
  for(int i=0;i<s.size();++i){
    if(s[i]=='o'){
      if(iso){
        iso=false;
        continue;
      }
      return false;
    }
    if(s[i]=='#'){
      iso=true;
    }
  }
  return true;
}
signed main() {
  FastIO io;
  string s;
  io.read(s);
  for(int i=0;i<s.size();++i){
    string scp=s;
    if(scp[i]=='.'){
      scp[i]='o';
      if(ok(scp)){
        s=scp;
      }
    }
  }
  io.writeString(s,'\n');
  return 0;
}
