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
    int a,b;
    cin>>a>>b;
    for(int i=0;i<256;i++){
        if((a^i)==b)cout<<i<<endl;
    }
    return 0;
}
