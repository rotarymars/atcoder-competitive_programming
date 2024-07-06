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
    long long a,b,k;
    cin>>a>>b>>k;
    int cnt=0;
    while(1){
        if(a>=b){
            cout<<cnt<<endl;
            return 0;
        }
        a*=k;
        cnt++;
    }
    return 0;
}
