#include <iostream>
#include <map>
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
    map<char,int>m;
    m[s[0]]++;m[s[1]]++;m[s[2]]++;
    if(m.size()==1)cout<<"-1\n";
    else{
        if(m.begin()->second==1)cout<<m.begin()->first<<endl;
        else cout<<prev(m.end(),1)->first<<endl;
    }
    return 0;
}
