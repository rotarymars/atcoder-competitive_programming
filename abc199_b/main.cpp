#include <iostream>
#include <limits.h>
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
    int n;
    cin>>n;
    int maxint=0,minint=INT_MAX;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        maxint=max(maxint,tmp);
    }
    for(;n;n--){
        int tmp;
        cin>>tmp;
        minint=min(minint,tmp);
    }
    cout<<max(0,minint-maxint+1)<<endl;
    return 0;
}
