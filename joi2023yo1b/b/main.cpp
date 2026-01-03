#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int a, b;
  io.read(a, b);
  io.write(a < b ? -1 : (a == b ? 0 : 1), '\n');
  return 0;
}
