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
    int n,d;
    cin>>n>>d;
    string s(d,'o');
    for(;n;n--){
        string tmp;
        cin>>tmp;
        for(int i=0;i<d;i++)if(tmp[i]=='x')s[i]='x';
    }
    DP(s);
    int ans=0,cnt=0;
    for(int i=0;i<d;i++){
        if(s[i]=='o')cnt++;
        else cnt=0;
        ans=max(ans,cnt);
    }
    cout<<ans<<endl;
    return 0;
}
