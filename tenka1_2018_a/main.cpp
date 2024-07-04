#include <iostream>
#include <algorithm>
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
    if(s.size()==2)cout<<s<<endl;
    else goto label;
    return 0;
    label:
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}
