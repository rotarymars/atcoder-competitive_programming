#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  long long n;
  io.read(n);
  --n;
  io.write(n * (n + 1) / 2, '\n');
  return 0;
}
