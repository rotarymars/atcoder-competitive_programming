#include <template/fastio.hpp>
#include <regex>
using namespace std;
signed main() {
  FastIO io;
  int n;
  string s;
  io.read(n);
  io.read(s);
  if(regex_match(s,regex("^.*tea$"))){
    io.write("Yes\n");
  }
  else{
    io.write("No\n");
  }
  return 0;
}
