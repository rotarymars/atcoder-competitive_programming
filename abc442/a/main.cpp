#include <template/fastio.hpp>
#include <string>
using namespace std;
signed main() {
  FastIO io;
  string s;
  io.read(s);
  int cnt=0;
  for (int i=0;i<s.size();++i) {
    if (s[i]=='i'||s[i]=='j') {
      ++cnt;
    }
  }
  io.writeln(cnt);
  return 0;
}
