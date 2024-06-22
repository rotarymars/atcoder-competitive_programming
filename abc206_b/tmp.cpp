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
    int sum=0;
    int n;
    cin>>n;
    for(int i=1;i<=1e9;i++){
        sum+=i;
        if(sum>=n){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
