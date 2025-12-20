#include <algorithm>
#include <climits>
#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n, q;
  io.read(n, q);
  vector<long long> v(n);
  io.read(v);
  sort(v.begin(), v.end());
  vector<long long> sum(1 + n, 0);
  for (int i = 0; i < n; ++i) {
    sum[1 + i] = sum[i] + v[i];
  }
  // sum from a to b ->sum[b]-sum[a-1]
  for (; q--;) {
    long long c, d;
    io.read(c, d);
    auto calc = [&](long long k) -> long long {
      long long discount = d * k;
      auto it = upper_bound(v.begin(), v.end(), discount);
      int idx = it - v.begin();
      return sum[n] - sum[idx] - discount * (n - idx) + c * k;
    };
    long long left = 0, right = (v[n - 1] + d - 1) / d + 1;
    while (left < right) {
      long long mid = left + (right - left) / 2;
      if (calc(mid) > calc(mid + 1)) {
        left = mid + 1;
      } else {
        right = mid;
      }
    }
    long long minpayment = calc(left);
    io.write(minpayment, '\n');
  }
  return 0;
}
