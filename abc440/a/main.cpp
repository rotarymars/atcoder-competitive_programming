#include <fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int x,y;
  io.read(x,y);
  for (;y--;) {
    x*=2;
  }
  io.writeln(x);
  return 0;
}
