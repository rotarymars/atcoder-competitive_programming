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
    int n,k;
    string s;
    cin>>n>>s>>k;
    k--;
    for(int i=0;i<n;i++){
        if(s[k]!=s[i])cout<<"*";
        else cout<<s[i];
    }
    cout<<endl;
    return 0;
}
