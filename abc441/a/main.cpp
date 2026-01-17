#include <template/fastio.hpp>
using namespace std;
signed main() {
  FastIO io;
  int p,q,x,y;
  io.read(p,q,x,y);
  if(p<=x&&x<p+100&&q<=y&&y<q+100){
    io.write("Yes\n");
  }
  else{
    io.write("No\n");
  }
  return 0;
}
