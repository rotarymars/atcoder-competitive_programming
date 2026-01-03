#include <algorithm>
#include <template/fastio.hpp>
#include <vector>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  vector<long long> v(n);
  for (int i = 0; i < n; ++i) {
    long long a, b;
    io.read(a, b);
    v[i] = a + b;
  }
  io.write(*max_element(v.begin(), v.end()), '\n');
  return 0;
}
