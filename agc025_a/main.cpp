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
    int ans=INT_MAX;
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int tmp=0;
        string s=to_string(i),t=to_string(n-i);
        for(char&j:s)tmp+=j-'0';
        for(char&j:t)tmp+=j-'0';
        ans=min(ans,tmp);
    }
    cout<<ans<<endl;
    return 0;
}
