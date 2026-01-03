#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  long long n;
  io.read(n);
  long long ans = 2 * n;
  for (long long i = 1; i * i <= n; ++i) {
    if (n % i != 0) {
      continue;
    }
    ans = min(ans, n / i - 1 + i - 1);
  }
  io.write(ans, '\n');
  return 0;
}
