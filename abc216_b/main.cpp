#include <iostream>
#include <set>
#include <utility>
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
    int n;
    cin>>n;
    set<pair<string,string>>se;
    bool ok=false;
    for(;n;n--){
        string s,t;
        cin>>s>>t;
        if(se.contains(make_pair(s,t))){
            cout<<"Yes\n";
            return 0;
        }
        se.insert(make_pair(s,t));
    }
    cout<<"No\n";
    return 0;
}
