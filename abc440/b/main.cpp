#include <template/fastio.hpp>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  vector<pair<int,int>>v(n);
  for (int i=0;i<n;i++) {
    io.read(v[i].first);
    v[i].second=1+i;
  }
  sort(v.begin(),v.end());
  for (int i=0;i<3;i++) {
    io.write(v[i].second,i==2?"":" ");
  }
  io.write('\n');
  return 0;
}
