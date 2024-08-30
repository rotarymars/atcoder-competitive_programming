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
    int n;
    cin>>n;
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    n-=2;
    for(;n;n--){
        cin>>e>>f;
        if(e==f&&a==b&&c==d){
            cout<<"Yes\n";
            return 0;
        }
        a=c,b=d,c=e,d=f;
    }
    cout<<"No\n";
    return 0;
}
