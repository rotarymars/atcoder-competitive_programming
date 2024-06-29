#include <iostream>
#include <set>
#include <string>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
string I(){string s;cin>>s;return s;}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    set<string>se;
    se.insert("ABC");se.insert("ARC");se.insert("AGC");se.insert("AHC");
    se.erase(I());se.erase(I());se.erase(I());
    cout<<*se.begin()<<endl;
    return 0;
}
