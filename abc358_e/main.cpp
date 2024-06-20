#include <iostream>
#include <numeric>
#include <vector>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
using ll=long long;
constexpr ll mod=998244353;
vector<ll>c(26);
ll cal(ll n,ll m){
    ll ret=1;
    for(;m;m--){
        ret*=n;
        ret%=mod;
        n--;
    }
    return ret%mod;
}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    ll n;
    cin>>n;
    for(ll&i:c)cin>>i;
    
    return 0;
}
