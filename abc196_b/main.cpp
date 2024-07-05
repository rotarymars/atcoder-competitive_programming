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
    cout<<s.substr(0,distance(s.begin(),find(s.begin(),s.end(),'.')))<<endl;
    return 0;
}
