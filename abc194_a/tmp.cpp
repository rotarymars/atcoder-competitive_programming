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
    int c,b;
    cin>>c>>b;
    int a=b+c;
    if(a>=15&&b>=8)cout<<1<<endl;
    else if(a>=10&&b>=3)cout<<2<<endl;
    else if(a>=3)cout<<3<<endl;
    else cout<<4<<endl;
    return 0;
}
