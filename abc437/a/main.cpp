#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int a, b;
  io.read(a, b);
  io.write(12 * a + b, '\n');
  return 0;
}
