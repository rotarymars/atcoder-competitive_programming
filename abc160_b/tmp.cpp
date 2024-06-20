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
    int x;
    cin>>x;
    cout<<(x/500*1000+(x-x/500*500)/5*5)<<endl;
    return 0;
}
