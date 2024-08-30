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
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    if(x<=a)cout<<1.0<<endl;
    else if(x<=b){
        long double res=c;
        cout<<res/(b-a)<<endl;
    }
    else cout<<0.0<<endl;
    return 0;
}
