#include <template/fastio.hpp>
#include <string>
using namespace std;
signed main() {
  FastIO io;
  string s;
  io.read(s);
  for (int i=0;i<s.size();++i) {
    if (s[i]!=s[0]) {
      io.writeln("No");
      return 0;
    }
  }
  io.writeln("Yes");
  return 0;
}
