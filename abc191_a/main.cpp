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
    int v,t,s,d;
    cin>>v>>t>>s>>d;
    cout<<(d<v*t||d>v*s?"Yes\n":"No\n");
    return 0;
}
