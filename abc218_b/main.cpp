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
    for(int i=0;i<26;i++){
        int tmp;
        cin>>tmp;
        cout<<(char)('a'+--tmp);
    }
    cout<<endl;
    return 0;
}
