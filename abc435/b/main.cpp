#include <numeric>
#include <template/fastio.hpp>
#include <vector>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  vector<int> v(n);
  io.read(v);
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      int sum = accumulate(v.begin() + i, v.begin() + j + 1, 0);
      // io.write(i, j, '\n');
      bool flag = true;
      for (int k = i; k <= j; ++k) {
        if (sum % v[k] == 0) {
          flag = false;
          break;
        }
      }
      if (flag)
        ++cnt;
    }
  }
  io.write(cnt, '\n');
  return 0;
}
