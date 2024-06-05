#include <iostream>
#include <string>
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
    string s;
    cin>>s;
    int a=45;
    for(int i=0;i<9;i++)a-=s[i]-'0';
    cout<<a<<endl;
    return 0;
}
