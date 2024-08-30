#include <iostream>
:q
:q
:q
:wq
:wq
:exit
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
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.size();i++){
        cout<<s[i];
        if(t.size()==i)break;
        cout<<t[i];
    }
    cout<<endl;
    return 0;
}
