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
    string as,bs;
    as=bs="";
    for(int i=0;i<b;i++)as+=to_string(a);
    for(int i=0;i<a;i++)bs+=to_string(b);
    cout<<(as<bs?as:bs)<<endl;
    return 0;
}
