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
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]=='6')s[i]='9';
        else if(s[i]=='9')s[i]='6';
    }
    cout<<s<<endl;
    return 0;
}
