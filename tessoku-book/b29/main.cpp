#include <template/fastio.hpp>
#include <template/powmod.hpp>
using namespace std;
signed main() {
  FastIO io;
  long long a, b;
  io.read(a, b);
  io.write(POWMOD(a, b, 1000000007ll), '\n');
  return 0;
}
