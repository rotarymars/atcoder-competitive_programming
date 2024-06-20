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
    long double pi=3.141592,r;
    cin>>r;
    cout<<2.0*r*pi<<endl;
    return 0;
}
