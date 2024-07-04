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
    int n,k;
    cin>>n>>k;
    int ans=0;
    for(;n;n--){
        int tmp;
        cin>>tmp;
        if(tmp>=k)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
