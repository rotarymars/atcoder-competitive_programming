#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n,s;
  io.read(n,s);
  int cnt=0;
  for(int i = 1; i <=n; ++i) {
    if(s<=i)break;
    cnt+=min(n, s-i);
  }
  io.write(cnt,'\n');
  return 0;
}
