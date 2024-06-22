#include <iostream>
#include <set>
#include <string>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
string I(){
    string s;
    cin>>s;
    return s;
}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    set s{I(),I(),I(),I()};
    if(s.size()==4)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
