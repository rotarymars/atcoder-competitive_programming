#include <iostream>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    long long x,y;
    cin>>x>>y;
    long long ans=0;
    if(x<=3)ans+=100000ll*(4ll-x);
    if(y<=3)ans+=100000ll*(4ll-y);
    if(x==y&&y==1)ans+=400000ll;
    cout<<ans<<endl;
    return 0;
}
