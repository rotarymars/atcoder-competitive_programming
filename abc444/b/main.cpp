#include <template/fastio.hpp>
#include <string>
using namespace std;
signed main() {
  FastIO io;
  int n;
  int k;
  io.read(n,k);
  int cnt=0;
  for (int i=0;i<=n;++i) {
    string s=to_string(i);
    int sum=0;
    while (s!="") {
      sum+=s.back()-'0';
      s.pop_back();
    }
    if (sum==k)++cnt;
  }
  io.writeln(cnt);
  return 0;
}
