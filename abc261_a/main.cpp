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
    int la,ra,lb,rb;
    cin>>la>>ra>>lb>>rb;
    cout << max(0, min(ra, rb) - max(la, lb)) << endl;
    return 0;
}
