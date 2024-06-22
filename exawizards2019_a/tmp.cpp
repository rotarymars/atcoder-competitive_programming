#include <iostream>
#include <vector>
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
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b&&b==c)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
