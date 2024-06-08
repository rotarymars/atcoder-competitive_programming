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
    int c=0;
    for(int i=0;i<3;i++)if(a&(1<<i)||b&(1<<i))c+=(1<<i);
    cout<<c<<endl;
    return 0;
}
