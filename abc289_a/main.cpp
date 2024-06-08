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
    char c;
    while(cin>>c){
        cout<<(c-'0'?'0':'1');
    }
    cout<<endl;
    return 0;
}
