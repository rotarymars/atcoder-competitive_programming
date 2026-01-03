#include <template/fastio.hpp>
#include <string>
using namespace std;
signed main() {
  FastIO io;
  int a,b,c;
  string s;
  io.read(a,b,c,s);
  io.write(a+b+c," ",s,"\n");
  return 0;
}
