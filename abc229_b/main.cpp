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
    long long a,b;
    cin>>a>>b;
    while(a>0&&b>0){
        if(a%10+b%10>=10){
            cout<<"Hard\n";
            return 0;
        }
        a/=10,b/=10;
    }
    cout<<"Easy\n";
    return 0;
}
