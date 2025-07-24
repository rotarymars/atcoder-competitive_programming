#include <iostream>
#include <template/prime_factorize.hpp>
#include <template/isprime.hpp>
#include <vector>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<pair<int,int>>v=PRIME_FACTORIZE(n);
  if(v.size()==1&&ISPRIME(v[0].first))
    cout<<"No\n";
  else cout<<"Yes\n";
}
signed main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--)solve();
  return 0;
}
