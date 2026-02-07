#include <algorithm>
#include <template/fastio.hpp>
#include <climits>
#include <unordered_map>
#include <vector>
#include <template/enum_divisors.hpp>

using namespace std;


signed main() {
  FastIO io;

  int n;
  io.read(n);
  vector<long long> a(n);
  long long sum = 0;
  long long maxA = 0;
  for (int i = 0; i < n; i++) {
    io.read(a[i]);
    sum += a[i];
    maxA = max(maxA, a[i]);
  }
  sort(a.begin(), a.end());
  vector<long long> answers;
  vector<long long> divisors = ENUM_DIVISORS(sum);
  for (long long L : divisors) {
    if (L < maxA) continue;

    long long k = sum / L;
    if (k > n || 2 * k < n) continue;
    unordered_map<long long, int> cnt;
    for (int i = 0; i < n; i++) {
      cnt[a[i]]++;
    }

    int numSingles = 2 * k - n;
    if (cnt[L] < numSingles) continue;
    cnt[L] -= numSingles;
    bool valid = true;
    for (auto& [val, count] : cnt) {
      if (count == 0) continue;
      long long other = L - val;
      if (other <= 0 || other > L) {
        valid = false;
        break;
      }
      if (val == other) {
        if (count % 2 != 0) {
          valid = false;
          break;
        }
      } else {
        if (!cnt.contains(other) || cnt[other] != count) {
          valid = false;
          break;
        }
      }
    }
    if (valid) {
      answers.push_back(L);
    }
  }
  sort(answers.begin(), answers.end());
  for (int i = 0; i < answers.size(); ++i) {
    if (i > 0) io.write(' ');
    io.write(answers[i]);
  }
  io.write('\n');

  return 0;
}
