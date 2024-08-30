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
    int n,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        while(a%6!=1&&a%6!=3)a--,ans++;
    }
    cout<<ans<<endl;
    return 0;
}
