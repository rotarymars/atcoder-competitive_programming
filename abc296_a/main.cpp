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
    cin>>s>>s;
    char a=s[0];
    bool ok=true;
    for(int i=0;i<s.size();i++){
        if(s[i]==a){
            a=(a=='F'?'M':'F');
            continue;
        }
        ok=false;
    }
    cout<<(ok?"Yes":"No")<<endl;
    return 0;
}
