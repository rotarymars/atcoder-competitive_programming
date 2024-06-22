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
    cout<<s[0];
    for(int i=1;i<s.size();i++){
        if(s[i]=='a'&&s[i-1]=='n')cout<<'y';
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}
