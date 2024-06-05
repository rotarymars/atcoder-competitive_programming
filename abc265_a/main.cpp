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
    int x,y,n;
    cin>>x>>y>>n;
    if(x*3>y)cout<<n/3*y+n%3*x<<endl;
    else cout<<x*n<<endl;
    return 0;
}
