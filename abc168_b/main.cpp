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
    int k;string s;
    cin>>k>>s;
    if(s.size()>k)cout<<s.substr(0,k)<<"..."<<endl;
    else cout<<s<<endl;
    return 0;
}
