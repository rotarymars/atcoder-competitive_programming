#include <map>
#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  map<map<char, int>, int> mp;
  for (int i = 0; i < n; i++) {
    string s;
    io.read(s);
    map<char, int> cnt;
    for (auto c : s)
      cnt[c]++;
    mp[cnt]++;
  }
  long long ans = 0;
  for (auto &i : mp) {
    ans += 1LL * i.second * (i.second - 1) / 2;
  }
  io.write(ans, '\n');
  return 0;
}
