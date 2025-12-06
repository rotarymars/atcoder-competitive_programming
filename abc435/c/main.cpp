#include <template/fastio.hpp>
#include <vector>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  vector<int> v(n);
  io.read(v);
  int maxindex = 0;
  for (int i = 0; i < n && i <= maxindex; ++i) {
    maxindex = max(maxindex, i + v[i] - 1);
  }
  io.write(min(maxindex + 1, n), '\n');
  return 0;
}
