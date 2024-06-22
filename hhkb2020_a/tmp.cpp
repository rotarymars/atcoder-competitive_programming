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
    char a,t;
    cin>>a>>t;
    if(a=='Y'){
        if(t>='A'&&t<='Z')cout<<t<<endl;
        else cout<<(char)(t^32)<<endl;
    }else cout<<t<<endl;
    return 0;
}
