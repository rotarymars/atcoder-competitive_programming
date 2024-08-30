#include <iostream>
#include<string>
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
    for(int i=0;i<s.size();i++){
        if(i%2&&s[i]>='A'&&s[i]<='Z')continue;
        if(!(i%2)&&s[i]>='a'&&s[i]<='z')continue;
        cout<<"No\n";
        return 0;
    }
    cout<<"Yes\n";
    return 0;
}
