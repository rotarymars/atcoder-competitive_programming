#include <fastio.hpp>
#include <vector>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  vector<int>v(n);
  io.read(v);
  for (int i = 0; i < n; i++) {
    --v[i];
  }
  vector<int>fp(n);
  for (int i=n-1;i>=0;--i) {
    if (v[i]==i) fp[i]=i;
    else fp[i]=fp[v[i]];
  }
  vector<int>ans(n);
  for (int i=0;i<n;++i) {
    ans[i]=fp[i]+1;
  }
  io.writeln(ans);
  return 0;
}
