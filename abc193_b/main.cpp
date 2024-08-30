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
    int n,ans=INT_MAX;
    cin>>n;
    for(;n;n--){
        int a,p,x;
        cin>>a>>p>>x;
        if(x-a>0)ans=min(ans,p);
    }
    cout<<(ans==INT_MAX?-1:ans)<<endl;
    return 0;
}
