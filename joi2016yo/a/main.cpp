#include <template/fastio.hpp>
#include <algorithm>
using namespace std;
signed main() {
  FastIO io;
  int a,b,c,d,e,f;
  io.read(a,b,c,d,e,f);
  vector<int>v{a,b,c,d};
  sort(v.begin(),v.end(),greater<>());
  io.write(v[0]+v[1]+v[2]+max(e,f),'\n');
  return 0;
}
