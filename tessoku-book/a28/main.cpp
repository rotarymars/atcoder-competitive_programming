#include <template/fastio.hpp>
#include <utility>
using namespace std;
void compute(int &t) {
  if (t < 0) {
    while (t < 0)
      t += 10000;
  }
  if (t >= 10000) {
    while (t >= 10000)
      t -= 10000;
  }
  return;
}
signed main() {
  FastIO io;
  int n;
  io.read(n);
  int now = 0;
  for (; n--;) {
    char c;
    int t;
    io.read(c, t);
    if (c == '+') {
      now += t;
    } else if (c == '-') {
      now -= t;
    } else if (c == '*') {
      now *= t;
    } else
      std::unreachable();
    ;
    compute(now);
    io.write(now, '\n');
  }
  return 0;
}
