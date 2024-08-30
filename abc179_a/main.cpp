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
    if(s.back()=='s')cout<<s<<"es"<<endl;
    else cout<<s<<'s'<<endl;
    return 0;
}
