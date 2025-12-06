#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  io.write(n * (n + 1) / 2, '\n');
  return 0;
}
