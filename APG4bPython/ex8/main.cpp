#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  for(;n--;){
    int a,b;
    io.read(a,b);
    io.write(a+b,'\n');
  }
  return 0;
}
