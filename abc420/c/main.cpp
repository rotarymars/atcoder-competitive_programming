#include <iostream>
#include <vector>
using namespace std;
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n,q;
  cin>>n>>q;
  vector<long long>a(n),b(n);
  for(auto&i:a){
    cin>>i;
  }
  for(auto&i:b){
    cin>>i;
  }
  long long ans=0;
  for(int i=0;i<n;++i){
    ans+=min(a[i],b[i]);
  }
  for(;q--;){
    char c;
    long long x,v;
    cin>>c>>x>>v;
    --x;
    if(c=='A'){
      long long old_min = min(a[x], b[x]);
      a[x] = v;
      long long new_min = min(a[x], b[x]);
      ans = ans - old_min + new_min;
    }
    else if(c=='B'){
      long long old_min = min(a[x], b[x]);
      b[x] = v;
      long long new_min = min(a[x], b[x]);
      ans = ans - old_min + new_min;
    }
    else{
      abort();
    }
    cout<<ans<<'\n';
  }
  return 0;
}
