#include <template/fastio.hpp>
#include <template/inverse_element.hpp>
using namespace std;
signed main() {
  FastIO io;
  long long n, r;
  io.read(n, r);
  constexpr long long mod = 1000000007;
  long long a, b;
  a = b = 1;
  for (int i = 0; i < r; ++i, --n) {
    a *= n;
    a %= mod;
  }
  for (; r > 0; --r) {
    b *= r;
    b %= mod;
  }
  io.write(a * inverse_element(b, mod) % mod, '\n');
  return 0;
}
