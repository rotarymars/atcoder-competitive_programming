#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto&i:v){
    cin>>i;
  }
  sort(v.begin(),v.end(),greater<>());
  long double pos=1.0f;
  long double ans=0;
  for(int i=0;i<n;++i){
    ans+=v[i]*v[i]*M_PI*pos;
    pos*=-1.0f;
  }
  cout<<fixed<<setprecision(10)<<ans<<endl;
  return 0;
}
