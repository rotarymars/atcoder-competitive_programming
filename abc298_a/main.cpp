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
    bool yes=false,bad=false;
    cin>>s>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='o')yes=true;
        if(s[i]=='x')bad=true;
    }
    if(yes&&!bad)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
