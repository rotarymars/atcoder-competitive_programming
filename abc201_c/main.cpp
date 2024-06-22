#include <iostream>
#include <algorithm>
#ifdef _DEBUG
#define DP(x) cout << #x << " = " << x << endl
#else
#define DP(x) ;
#endif
using namespace std;
string leadingzero(int n){
    string ret=to_string(n);
    while(ret.size()!=4)ret.insert(ret.begin(),'0');
    return ret;
}
signed main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int ans=0;
    string s;
    cin>>s;
    bool ok;
    for(int i=0;i<=9999;i++){
        string t=leadingzero(i);
        DP(t);
        ok=true;
        for(int j=0;j<10;j++){
            if(count(t.begin(),t.end(),'0'+j)&&s[j]=='x')ok=false;
            if(!count(t.begin(),t.end(),'0'+j)&&s[j]=='o')ok=false;
        }
        ans+=ok;
    }
    cout<<ans<<endl;
    return 0;
}
