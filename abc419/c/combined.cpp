#include <algorithm>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  vector<pair<long long, long long>> v(n);
  long long firstmax = 0, firstmin = 1000010000, secondmax = 0,
            secondmin = 1000010000;
  for (auto &i : v) {
    cin >> i.first >> i.second;
    firstmax = max(firstmax, i.first);
    firstmin = min(firstmin, i.first);
    secondmax = max(secondmax, i.second);
    secondmin = min(secondmin, i.second);
  }
  long long ans = LLONG_MAX;
  long double firstmean = (long double)(firstmax + firstmin) / 2.0,
              secondmean = (long double)(secondmax + secondmin) / 2.0;
  long long tempans = 0;
  for (int i = 0; i < n; ++i) {
    tempans =
        max(tempans, (long long)max(abs(v[i].first - floor(firstmean)),
                                    abs(v[i].second - floor(secondmean))));
  }
  ans = min(ans, tempans);
  tempans = 0;
  for (int i = 0; i < n; ++i) {
    tempans = max(tempans, (long long)max(abs(v[i].first - floor(firstmean)),
                                          abs(v[i].second - ceil(secondmean))));
  }
  ans = min(ans, tempans);
  tempans = 0;
  for (int i = 0; i < n; ++i) {
    tempans =
        max(tempans, (long long)max(abs(v[i].first - ceil(firstmean)),
                                    abs(v[i].second - floor(secondmean))));
  }
  ans = min(ans, tempans);
  tempans = 0;
  for (int i = 0; i < n; ++i) {
    tempans = max(tempans, (long long)max(abs(v[i].first - ceil(firstmean)),
                                          abs(v[i].second - ceil(secondmean))));
  }
  ans = min(ans, tempans);
  cout << ans << '\n';
  return 0;
}