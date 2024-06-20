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
    int n,k,a;
    cin>>n>>k>>a;
    if((a+k-1)%n==0)cout<<n<<endl;
    else cout<<(a+k-1)%n<<endl;
    return 0;
}
