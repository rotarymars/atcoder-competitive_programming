#include <template/fastio.hpp>
#include <algorithm>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  vector<int>v(n);
  io.read(v);
  int ans=1;
  for(int i = 0; i < n; ++i) {
    for(int j = 1+i; j < n; ++j) {
      if(is_sorted(v.begin()+i,v.begin()+j+1)){
        ans=max(ans,j-i+1);
      }
    }
  }
  io.write(ans,'\n');
  return 0;
}
