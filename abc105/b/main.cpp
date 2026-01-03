#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  for(int i = 0; i <= n; i+=4) {
    if((n-i)%7==0){
      io.write("Yes\n");
      return 0;
    }
  }
  io.write("No\n");
  return 0;
}
