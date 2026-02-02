#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  long long n,k;
  io.read(n,k);
  int ncp=n;
  for(;k>0;){
    k-=n;
    ++n;
  }
  io.write(n-ncp-1,'\n');
  return 0;
}
