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
    int n;
    cin>>n;
    for(;n;n--){
        int l,r;
        cin>>l>>r;
        reverse(next(s.begin(),l-1),next(s.begin(),r));
        DP(s);
    }
    cout<<s<<endl;
    return 0;
}
