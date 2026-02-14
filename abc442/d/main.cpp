#include <fastio.hpp>
#include <atcoder/segtree.hpp>
using namespace std;
int op(int a,int b) {
  return a+b;
}
int e() {
  return 0;
}
signed main() {
  FastIO io;
  int n,q;
  io.read(n,q);
  atcoder::segtree<int,op,e> seg(n);
  for (int i=0;i<n;i++) {
    long long a;
    io.read(a);
    seg.set(i,a);
  }
  for (int i=0;i<q;i++) {
    char c;
    io.read(c);
    if (c=='1') {
      int x;
      io.read(x);
      int a=seg.get(x-1),b=seg.get(x);
      seg.set(x-1,b);
      seg.set(x,a);
    }
    else {
      int l,r;
      io.read(l,r);
      io.writeln(seg.prod(l-1,r));
    }
  }
  return 0;
}
