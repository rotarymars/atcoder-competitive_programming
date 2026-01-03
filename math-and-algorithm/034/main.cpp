#include <template/fastio.hpp>
#include <vector>
#include <utility>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  vector<pair<long double,long double>>v(n);
  io.read(v);
  long double ans=1e9;
  for(int i = 0; i < n; ++i) {
    for(int j = i+1; j < n; ++j) {
      long double dx = v[i].first - v[j].first;
      long double dy = v[i].second - v[j].second;
      long double dist = sqrt(dx*dx + dy*dy);
      ans = min(ans, dist);
    }
  }
  io.write(ans, '\n');
  return 0;
}
