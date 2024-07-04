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
    int n;
    cin>>n;
    bool ok=true;
    for(;n;n--){
        int tmp;
        cin>>tmp;
        if(!(tmp%2))if(!(tmp%3==0||tmp%5==0))ok=false;
    }
    cout<<(ok?"APPROVED":"DENIED")<<endl;
    return 0;
}
