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
    string s;
    cin>>s;
    if(s[0]==s[1]&&s[1]==s[2]&&s[2]=='R')cout<<3<<endl;
    else if((s[0]==s[1]&&s[1]=='R')||(s[1]==s[2]&&s[2]=='R'))cout<<2<<endl;
    else if(s[0]=='R'||s[1]=='R'||s[2]=='R')cout<<1<<endl;
    else cout<<0<<endl;
    return 0;
}
