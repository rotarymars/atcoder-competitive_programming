#include <iostream>
#include <numeric>
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
    char a,b;
    cin>>a>>b;
    if(a>b)swap(a,b);
    int ar[]={3,1,4,1,5,9};
    cout<<accumulate(ar+a-'A',ar+b-'A',0)<<endl;
    return 0;
}
