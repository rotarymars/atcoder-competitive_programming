#include <fastio.hpp>
#include <string>
#include <regex>
using namespace std;
signed main() {
  FastIO io;
  string s;
  io.read(s);
  regex re("^(dream|dreamer|erase|eraser)+$");
  if (regex_match(s,re)) {
    io.writeln("YES");
  } else {
    io.writeln("NO");
  }
  return 0;
}
