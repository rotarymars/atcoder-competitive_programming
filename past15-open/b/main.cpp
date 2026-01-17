#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int c,h;
  io.read(c,h);
  io.write(h>=2800?"o":"x",'\n');
  return 0;
}
