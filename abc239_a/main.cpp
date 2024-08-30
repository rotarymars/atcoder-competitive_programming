#include <iostream>
#include <math.h>
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
    long double n;
    cin>>n;
    cout<<fixed<<setprecision(10)<<sqrt(n*(12800000.0+n))<<endl;
    return 0;
}
