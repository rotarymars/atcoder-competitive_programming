#include <algorithm>
#include <numeric>
#include <template/fastio.hpp>
#include <vector>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  vector<long long> v(n);
  io.read(v);
  bool allthree = true;
  bool alltwo = true;
  for (int i = 0; i < n; ++i) {
    if (v[i] % 3 != 0) {
      allthree = false;
    }
    if (v[i] != 2) {
      alltwo = false;
    }
  }
  if (n == 1) {
    io.write(v[0] / 3, '\n');
  } else if (n == 2) {
    io.write(
        v[0] / 3 + v[1] / 3 +
            max(min((v[0] % 3) / 2, v[1] % 3), min(v[0] % 3, (v[1] % 3) / 2)),
        '\n');
  } else if (allthree) {
    io.write(accumulate(v.begin(), v.end(), 0ll) / 3, '\n');
  } else if (alltwo) {
    io.write(accumulate(v.begin(), v.end(), 0ll) / 3, '\n');
  }

  return 0;
}
