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
    int sum=0;
    for(;n;n--){
        int tmp;
        cin>>tmp;
        sum+=tmp-1;
    }
    cout<<sum<<endl;
    return 0;
}
