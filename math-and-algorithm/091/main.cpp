#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n,x;
  io.read(n,x);
  int ans=0;
  for(int a = 1; a <= n; ++a) {
    for(int b = 1+a; b <= n; ++b) {
      for(int c = 1+b; c <= n; ++c) {
        if(a + b + c == x) {
          ++ans;
        }
      }
    }
  }
  io.write(ans, '\n');
  return 0;
}
