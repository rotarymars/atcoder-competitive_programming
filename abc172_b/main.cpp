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
    string s,t;
    int ans=0;
    cin>>s>>t;
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i])ans++;
    }
    cout<<ans<<endl;
    return 0;
}
