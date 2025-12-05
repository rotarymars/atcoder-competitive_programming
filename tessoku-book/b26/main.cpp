#include <template/fastio.hpp>
#include <vector>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  vector<bool> v(n + 1, true);
  v[0] = v[1] = false;
  for (int i = 2; i <= n; ++i) {
    if (!v[i])
      continue;
    int t = 2;
    while (i * t <= n) {
      v[i * t] = false;
      ++t;
    }
  }
  for (int i = 2; i <= n; ++i) {
    if (v[i]) {
      io.write(i, '\n');
    }
  }
  return 0;
}
