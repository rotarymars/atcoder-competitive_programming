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
    bool flag=false;
    string s;
    cin>>s;
    for(char&i:s)if(i=='7')flag=true;
    cout<<(flag?"Yes":"No")<<endl;
    return 0;
}
