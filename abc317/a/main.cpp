#include <template/fastio.hpp>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
signed main() {
  FastIO io;
  int n,h,x;
  io.read(n,h,x);
  vector<int>v(n);
  io.read(v);
  io.write(distance(v.begin(),lower_bound(v.begin(),v.end(),x-h))+1,'\n');
  return 0;
}
