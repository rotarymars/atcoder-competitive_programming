#include <iostream>
#include <vector>
#include <algorithm>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
using ll=long long;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    for(ll&i:a)cin>>i;
    for(ll&i:b)cin>>i;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll idx=0,ans=0;
    for(ll i=0;i<n;i++){
        if(idx==m)break;
        if(b[idx]<=a[i])idx++,ans+=a[i];
    }
    if(idx==m){
        cout<<ans<<endl;
    }else cout<<-1<<endl;
    return 0;
}
