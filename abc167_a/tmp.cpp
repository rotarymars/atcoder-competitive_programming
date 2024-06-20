#include <iostream>
#include <regex>
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
    cin>>s>>t;
    regex r(s+"."s);
    if(regex_match(t,r))cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
