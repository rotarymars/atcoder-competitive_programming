#include <fastio.hpp>
#include <vector>
#include <string>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  vector<string>v(n);
  io.read(v);
  size_t maxlen=0;
  for (const auto &s:v) {
    maxlen=max(maxlen,s.size());
  }
  for (const auto &s:v) {
    int k=(maxlen-s.size())/2;
    io.write(string(k,'.'));
    io.write(s);
    io.writeln(string(k,'.'));
  }
  return 0;
}
