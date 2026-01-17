#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int a,b;
  io.read(a,b);
  io.write(a+300*b,'\n');
  return 0;
}
