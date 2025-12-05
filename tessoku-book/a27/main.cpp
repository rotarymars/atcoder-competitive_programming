#include <template/fastio.hpp>
#include <template/gcd_lcm.hpp>
using namespace std;
signed main() {
  FastIO io;
  int a, b;
  io.read(a, b);
  io.write(GCD(a, b), '\n');
  return 0;
}
