#include <algorithm>
#include <climits>
#include <map>
#include <template/fastio.hpp>
#include <vector>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  vector<int> v(n);
  io.read(v);
  sort(v.begin(), v.end());
  map<int, int> mp;
  for (auto &i : v) {
    ++mp[i];
  }
  int left = 0;
  int mindiff = INT_MAX, score = -1;
  for (auto &i : mp) {
    int right = n - left;
    if (abs(right - left) <= mindiff) {
      mindiff = abs(right - left);
      score = i.first;
    }
    left += i.second;
  }
  io.write(score, '\n');
  return 0;
}
