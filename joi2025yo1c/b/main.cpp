#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int a,b,c;
  io.read(a,b,c);
  io.write(a+b+c<=21?"1":"0",'\n');
  return 0;
}
