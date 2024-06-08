#include <iostream>
#include <string>
#include <algorithm>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
template <class T>
T POWMOD(T a, T b, T c) {
  T ans = 1;
  a %= c;
  while (b != 0)
  {
    if (b & 1)
    {
      ans *= a;
    }
    a *= a;
    b >>= 1;
    a %= c;
    ans %= c;
  }
  return ans;
}
constexpr long long mod=998244353;
long long cal(long long n){
    string s=to_string(n);
    long long r=POWMOD(10ll,(long long)s.size(),mod);
    long long S=(1-POWMOD(r,n,mod))*POWMOD(1-r,mod-2,mod);
    S%=mod;
    return (n*S)%mod;
}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    long long n;
    cin>>n;
    cout<<cal(n)<<endl;
    return 0;
}
