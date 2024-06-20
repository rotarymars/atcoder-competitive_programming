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
    int a,b,c;
    cin>>a>>b>>c;
    if(a+c>b)cout<<"Takahashi\n";
    else cout<<"Aoki\n";
    return 0;
}
