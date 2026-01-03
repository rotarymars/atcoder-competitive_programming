#include <template/fastio.hpp>
#include <vector>
#include <set>
using namespace std;
signed main() {
  FastIO io;
  int n,m;
  io.read(n,m);
  vector<int>v(n),vv(m);
  io.read(v,vv);
  set<int>st(vv.begin(),vv.end());
  int ans=0;
  for(auto&i:v){
    ans+=st.contains(i);
  }
  io.write(ans,'\n');
  return 0;
}
