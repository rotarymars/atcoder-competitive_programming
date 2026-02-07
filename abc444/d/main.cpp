#include <algorithm>
#include <cassert>
#include <template/fastio.hpp>
#include <vector>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  vector<int>a(n);
  io.read(a);
  auto maxel=max_element(a.begin(), a.end());
  vector<int>imos(*maxel+1,0);
  for (int i=0;i<n;++i) {
    imos[0]++;
    imos[a[i]]--;
  }
  for (int i=1;i<=*maxel;++i) {
    imos[i]+=imos[i-1];
  }
  assert(imos[*maxel]==0);
  vector<int>ans;
  int backup=0;
  for (int i=0;i<*maxel;++i) {
    if (imos[i]+backup<10) {
      ans.push_back(imos[i]+backup);
      backup=0;
    }
    else {
      ans.push_back((imos[i]+backup)%10);
      backup=(imos[i]+backup)/10;
    }
  }
  while (backup>0) {
    ans.push_back(backup%10);
    backup/=10;
  }
  reverse(ans.begin(), ans.end());
  for (int i=0;i<ans.size();++i) {
    io.write(ans[i]);
  }
  io.writeln("");
  return 0;
}
