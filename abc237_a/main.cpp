#include <iostream>
#include <limits.h>
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
    long long n;
    cin>>n;
    if(n>=INT_MIN&&n<=INT_MAX)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
