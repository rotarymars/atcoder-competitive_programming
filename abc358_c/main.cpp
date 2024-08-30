#include <iostream>
#include <limits.h>
#include <vector>
#include <string>
#include <bit>
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
    int n,m;
    cin>>n>>m;
    vector<string>v(n);
    for(string&i:v)cin>>i;
    int ans=INT_MAX;
    for(int i=0;i<(1<<n);i++){
        string tmp(m,'x');
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                for(int k=0;k<m;k++){
                    if(v[j][k]=='o')tmp[k]='o';
                }
            }
        }
        bool ok=true;
        for(int j=0;j<m;j++){
            if(tmp[j]!='o')ok=false;
        }
        if(ok)ans=min(ans,popcount((unsigned int)i));
    }
    cout<<ans<<endl;
    return 0;
}
