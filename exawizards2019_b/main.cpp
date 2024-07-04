#include <iostream>
#include <algorithm>
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
    int n;string s;
    cin>>n>>s;
    if(count(s.begin(),s.end(),'R')>count(s.begin(),s.end(),'B'))cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
