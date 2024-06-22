#include <iostream>
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
    for(int i=0;i<s.size();i++)for(int j=i-1;j<s.size();j++){
        string tmp="";
        for(int k=0;k<s.size();k++){
            if(i<=k&&k<=j)continue;
            tmp.push_back(s[k]);
        }
        if(tmp=="keyence"){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
