#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int a,b;
  io.read(a,b);
  io.write(a>3*b?"1":"0",'\n');
  return 0;
}
