#include <iostream>
#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using namespace std;
bool f(long long l, long long u, long long mylower, long long myupper) {
  if (mylower <= u && myupper >= l) {
    return true;
  }
  return false;
}
// #define _DEBUG
void solve() {
  int n, h;
  cin >> n >> h;
  long long mylower = h, myupper = h;
  long long beft = 0;
  bool ok = true;
  for (int i = 0; i < n; ++i) {
    long long t, l, u;
    cin >> t >> l >> u;
    mylower -= (t - beft);
    myupper += (t - beft);
    #ifdef _DEBUG
    cout<<mylower<<" "<<myupper<<endl;
    #endif
    mylower = max(0ll, mylower);
    if (f(l, u, mylower, myupper)) {
      mylower = max(l, mylower);
      myupper = min(u, myupper);
      mylower = max(0ll, mylower);
      beft = t;
    } else {
      ok=false;
    }
  }
  cout << (ok?"Yes\n":"No\n");
  return;
}
signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
