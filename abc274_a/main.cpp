#include <iostream>
#include <iomanip>
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
    long double a,b;
    cin>>a>>b;
    long double c=b/a;
    cout<<fixed<<setprecision(3)<<c<<endl;
    return 0;
}
