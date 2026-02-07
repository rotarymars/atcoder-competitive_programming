#include <set>
#include <vector>
#include <template/fastio.hpp>
#include <template/combinations.hpp>
using namespace std;
signed main() {
  FastIO io;
  int n;
  long long d;
  io.read(n,d);
  vector<long long>v(n);
  io.read(v);
  multiset<long long>se;
  long long ans=0;
  int l=0;
  auto conflicts=[&](int i)->bool {
    auto it=se.lower_bound(v[i]);
    if (it!=se.end()&&abs(v[i]-*it)<d) return true;
    if (it!=se.begin()&&abs(v[i]-*prev(it))<d) return true;
    return false;
  };
  for (int r=0;r<n;++r) {
    while (conflicts(r)) {
      se.erase(se.find(v[l]));
      ++l;
    }
    se.insert(v[r]);
    ans+=r-l+1;
  }
  io.writeln(ans);
  return 0;
}
