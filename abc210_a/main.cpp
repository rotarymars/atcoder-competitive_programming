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
    int n,a,x,y;
    cin>>n>>a>>x>>y;
    if(n>a)cout<<a*x+(n-a)*y<<endl;
    else cout<<n*x<<endl;
    return 0;
}
