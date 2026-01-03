#include <template/fastio.hpp>
#include <vector>
using namespace std;
signed main() {
  FastIO io;
  int n,m;
  io.read(n,m);
  vector<int>v(n),vv(m);
  io.read(v,vv);
  int ans=0;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      ans+=(v[i]+vv[j])*max(v[i],vv[j]);
    }
  }
  io.write(ans,'\n');
  return 0;
}
