#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int a,b;
  io.read(a,b);
  io.write("A:");
  for(;a--;)io.write(']');
  io.write("\nB:");
  for(;b--;)io.write(']');
  io.write('\n');
  return 0;
}
