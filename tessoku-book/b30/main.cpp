#include <template/fastio.hpp>
#include <template/inverse_element.hpp>
using namespace std;
signed main() {
  FastIO io;
  long long h, w;
  io.read(h, w);
  --h, --w;
  long long n = h + w, r = min(h, w);
  long long a, b;
  a = b = 1;
  constexpr long long mod = 1000000007;
  for (int i = 0; i < r; ++i, --n) {
    a *= n;
    a %= mod;
  }
  for (; r > 0; r--) {
    b *= r;
    b %= mod;
  }
  io.write(a * inverse_element(b, mod) % mod, '\n');
  return 0;
}
