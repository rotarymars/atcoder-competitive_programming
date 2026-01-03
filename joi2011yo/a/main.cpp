#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int a,b,c,d;
  io.read(a,b,c,d);
  int tmp=a+b+c+d;
  io.write(tmp/60,'\n',tmp%60,'\n');
  return 0;
}
