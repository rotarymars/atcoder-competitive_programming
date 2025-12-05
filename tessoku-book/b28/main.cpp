#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  constexpr int mod = 1000000007;
  if (n == 1 || n == 2) {
    io.write(1, '\n');
    return 0;
  }
  int t = 2;
  int bef1 = 1, bef2 = 1;
  while (t != n) {
    ++t;
    int newnum = bef1 + bef2;
    newnum %= mod;
    bef1 = bef2;
    bef2 = newnum;
  }
  io.write(bef2, '\n');
  return 0;
}
