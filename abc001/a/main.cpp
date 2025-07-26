#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int h1,h2;
  io.read(h1);
  io.read(h2);
  io.writeInt(h1-h2,'\n');
  return 0;
}
