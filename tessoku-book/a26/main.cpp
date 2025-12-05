#include <template/fastio.hpp>
#include <template/isprime.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  for (; n--;) {
    int x;
    io.read(x);
    io.writeYesNo(ISPRIME(x));
  }
  return 0;
}
