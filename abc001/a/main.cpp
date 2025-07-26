#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int h1,h2;
  io.readInt(h1);
  io.readInt(h2);
  io.writeInt(h1-h2,'\n');
  return 0;
}
