#include <template/fastio.hpp>
#include <algorithm>
using namespace std;
signed main() {
  FastIO io;
  int a,b,c,d,e;
  io.read(a,b,c,d,e);
  io.write(min({a,b,c})+min({d,e})-50,'\n');
  return 0;
}
