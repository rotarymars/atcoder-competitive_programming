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
    int r,d,x;
    cin>>r>>d>>x;
    for(int i=0;i<10;i++)cout<<(x=r*x-d)<<"\n";
    return 0;
}
