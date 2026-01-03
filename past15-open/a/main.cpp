#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int a, t;
  io.read(a, t);
  io.write(5 * a + t, '\n');
  return 0;
}
