#include <template/fastio.hpp>
#include <template/gcd_lcm.hpp>
using namespace std;
signed main() {
  FastIO io;
  long long a, b;
  io.read(a, b);
  io.write(a / GCD(a, b) * b, '\n');
  return 0;
}
