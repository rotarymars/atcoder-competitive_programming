#include <fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  io.writeln((1<<n)-2*n);
  return 0;
}
