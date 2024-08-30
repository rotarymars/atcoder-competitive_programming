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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==c&&++b==d)cout<<0<<endl;
    else cout<<1<<endl;
    return 0;
}
