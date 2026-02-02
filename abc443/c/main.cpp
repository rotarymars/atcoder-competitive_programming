#include <template/fastio.hpp>
#include <vector>
using namespace std;
signed main() {
  FastIO io;
  int n,t;
  io.read(n,t);
  int ans=0;
  vector<int>v(n);
  io.read(v);
  int opened=0;
  for(int i=0;i<n;++i){
    if(opened<v[i]){
      ans+=v[i]-opened;
      opened=v[i]+100;
    }
  }
  io.write(ans+(t-opened>0? t-opened : 0),'\n');
  return 0;
}
