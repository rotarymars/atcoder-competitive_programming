#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int h1,h2;
  io.read(h1,h2);
  io.write(h1-h2,'\n');
  return 0;
}
