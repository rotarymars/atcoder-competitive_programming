#include <iostream>
#include <set>
#include <utility>
#include <vector>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  long long n, m;
  cin >> n >> m;
  vector<pair<long long, long long>> pairs(m);
  for (auto& i : pairs) cin >> i.first >> i.second;
  set<pair<long long, long long>> cannot(pairs.begin(), pairs.end());
  vector<long long> knighth{2, 2, 1, -1, -2, -2, -1, 1},
      knightw{-1, 1, 2, 2, 1, -1, -2, -2};
  for (long long i = 0; i < m; i++) {
    auto nowpair = pairs[i];
    for (long long j = 0; j < 8; j++) {
      if (nowpair.first + knighth[j] < 1 || nowpair.first + knighth[j] > n ||
          nowpair.second + knightw[j] < 1 || nowpair.second + knightw[j] > n)
        continue;
      cannot.insert(
          make_pair(nowpair.first + knighth[j], nowpair.second + knightw[j]));
    }
  }
  cout << n * n - cannot.size() << endl;
  return 0;
}
