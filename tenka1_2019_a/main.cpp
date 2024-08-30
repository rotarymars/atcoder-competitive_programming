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
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)swap(a,b);
    if(a<=c&&c<=b)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
