#include <algorithm>
#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  vector<int> v(n);
  io.read(v);
  sort(v.rbegin(), v.rend());
  long long ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 1 + i; j < n; ++j) {
      if (j + 1 >= n)
        break;
      int target = v[i] - v[j];
      int l = 1 + j, r = n - 1;
      while (l < r) {
        int mid = (l + r + 1) / 2;
        if (v[mid] <= target)
          r = mid - 1;
        else
          l = mid;
      }
      if (v[l] > target)
        ans += l - j;
    }
  }
  io.write(ans, '\n');
  return 0;
}
