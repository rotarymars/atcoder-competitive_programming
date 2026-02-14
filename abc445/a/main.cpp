#include <fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  string s;
  io.read(s);
  io.writeln(s.front()==s.back()?"Yes":"No");
  return 0;
}
