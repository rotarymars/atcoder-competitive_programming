#include <template/fastio.hpp>
#include <vector>
using namespace std;
signed main() {
  FastIO io;
  int n;
  io.read(n);
  vector<long long>v(n);
  io.read(v);
  while(v.size()>1){
    vector<long long>cp(v.size()-1);
    for(int i=0;i<cp.size();++i){
      cp[i]=abs(v[i]-v[i+1]);
    }
    v=cp;
  }
  io.write(v[0],'\n');
  return 0;
}
