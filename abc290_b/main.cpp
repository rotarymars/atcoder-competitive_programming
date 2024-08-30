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
    string s;
    cin>>n>>k>>s;
    string ans(n,'a');
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt<k&&s[i]=='o'){
            ans[i]='o';
            cnt++;
        }else ans[i]='x';
    }
    cout<<ans<<endl;
    return 0;
}
