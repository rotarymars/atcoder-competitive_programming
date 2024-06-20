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
    int n,m;
    cin>>n>>m;
    int sum=0;
    sum+=n*(n-1);
    sum+=m*(m-1);
    cout<<sum/2<<endl;
    return 0;
}
