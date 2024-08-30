#include <iostream>
#include <algorithm>
#include<string>
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
    int l,r;string s;
    cin>>l>>r>>s;
    reverse(next(s.begin(),--l),next(s.begin(),r));
    cout<<s<<endl;
    return 0;
}
