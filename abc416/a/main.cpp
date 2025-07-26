#include <template/fastio.hpp>
#include <string>
using namespace std;
signed main() {
  FastIO io;
  int n,l,r;
  string s;
  io.read(n); io.read(l); io.read(r);
  io.read(s);
  for(int i=l-1;i<r;++i){
    if(s[i]=='o'){
      continue;
    }
    io.writeString(string("No\n"));
    return 0;
  }
  io.writeString(string("Yes\n"));
  return 0;
}
