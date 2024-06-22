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
    int n;
    cin>>n;
    int takahashicnt=0,cp=n;
    for(;cp;cp--){
        string s;
        cin>>s;
        if(s=="Takahashi")takahashicnt++;
    }
    cout<<takahashicnt<<endl;
    return 0;
}
