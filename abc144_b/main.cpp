#include <iostream>
#include <template/prime_factorize.hpp>
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
    int n;
    cin>>n;
    bool ok=false;
    for(int i=1;i<=9;i++)for(int j=1;j<=9;j++)if(i*j==n)ok=true;
    cout<<(ok?"Yes\n":"No\n");
    return 0;
}
