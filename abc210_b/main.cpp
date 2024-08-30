#include <iostream>
#include <string>
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
    for(int i=1;i<=s.size();i++){
        if(s[i-1]=='1'){
            cout<<(i%2?"Takahashi":"Aoki")<<endl;
            return 0;
        }
    }
    return 0;
}
