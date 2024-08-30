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
    int n,m,x,t,d;
    cin>>n>>m>>x>>t>>d;
    if(m>=x)cout<<t<<endl;
    else cout<<t-(x-m)*d<<endl;
    return 0;
}
