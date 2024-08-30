#include <iostream>
#include <set>
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
    set<char>se;
    string s;
    cin>>s;
    for(char&i:s)se.insert(i);
    if(se.size()==3)cout<<6<<endl;
    else if(se.size()==2)cout<<3<<endl;
    else cout<<1<<endl;
    return 0;
}
