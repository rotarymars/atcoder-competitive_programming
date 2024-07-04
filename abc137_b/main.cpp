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
    int k,x;
    cin>>k>>x;
    for(int i=x-k+1;i<=x+k-1;i++){
        if(i==x-k+1)cout<<i;
        else cout<<' '<<i;
    }
    cout<<endl;
    return 0;
}
