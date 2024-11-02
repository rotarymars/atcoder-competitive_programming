#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  long long n;
  long long k;
  cin >> n >> k;
  vector<pair<long long, long long>> v(n);
  for (auto &i : v) cin >> i.first >> i.second;
  sort(v.begin(), v.end());
  long long now = 0;
  auto befit = v.begin();
  while (true) {
    now += k;
    k = 0;
    auto it = lower_bound(v.begin(), v.end(), make_pair(now, 0ll));
    if (it->first == now) ++it;
    for (auto i = befit; i != it; ++i) {
      k += i->second;
    }
    befit = it;
    if (k == 0) break;
  }
  cout << now << endl;
  return 0;
}
