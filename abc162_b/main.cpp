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
    long long n,ans=0;
    cin>>n;
    while(n>0){
        if(n%3!=0&&n%5!=0)ans+=n;
        n--;
    }
    cout<<ans<<endl;
    return 0;
}
