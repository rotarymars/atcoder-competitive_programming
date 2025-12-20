#include <string>
#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n;
  string s;
  io.read(n, s);
  io.write(string(n - s.size(), 'o') + s, '\n');
  return 0;
}
