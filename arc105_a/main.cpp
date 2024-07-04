#include <iostream>
#include <algorithm>
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
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);
    if(a[0]+a[3]==a[1]+a[2]||a[0]+a[1]+a[2]==a[3])cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
