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
    while(1){
        c-=b;
        if(c<=0){
            cout<<"Yes\n";
            return 0;
        }
        a-=d;
        if(a<=0){
            cout<<"No\n";
            return 0;
        }
    }
    return 0;
}
