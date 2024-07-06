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
    int x,y,z;
    cin>>x>>y>>z;
    cout<<(y*z-1)/x<<endl;
    return 0;
}
