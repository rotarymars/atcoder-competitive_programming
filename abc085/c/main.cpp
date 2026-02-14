#include <fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n,y;
  io.read(n,y);
  y/=1000;
  for (int i=0;i<=n;++i) {
    for(int j=0;j<=n-i;++j) {
      constexpr int a = 10,b=5,c=1;
      int k=n-i-j;
      if (a*i+b*j+c*k==y) {
        io.writeln(i,' ',j,' ',k);
        return 0;
      }
    }
  }
  io.writeln("-1 -1 -1");
  return 0;
}
