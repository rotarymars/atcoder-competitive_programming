#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n,m;
  cin>>n>>m;
  vector<vector<int>>v(m);
  for(int i = 0; i < n; ++i) {
    int a,b;
    cin>>a>>b;
    v[--a].push_back(b);
  }
  for(int i = 0; i < m; ++i) {
    long double accumulated=accumulate(v[i].begin(),v[i].end(),0.0);
    cout<<fixed<<setprecision(10)<<accumulated/v[i].size()<<'\n';
  }
  return 0;
}
