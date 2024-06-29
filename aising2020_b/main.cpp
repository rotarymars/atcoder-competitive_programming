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
    int cnt=0;
    for(int i=1;i<=n;i++){
        int tmp;
        cin>>tmp;
        if((i%2)&&(tmp%2))cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
