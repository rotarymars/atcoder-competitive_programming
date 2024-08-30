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
    int n,x;
    cin>>n>>x;
    bool first=true;
    for(;n;n--){
        int a;
        cin>>a;
        if(a==x)continue;
        if(first){
            cout<<a;
            first=false;
            continue;
        }
        cout<<' '<<a;
    }
    cout<<endl;
    return 0;
}
