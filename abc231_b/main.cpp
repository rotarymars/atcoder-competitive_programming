#include <iostream>
#include <algorithm>
#include <string>
#include <map>
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
    map<string,int>m;
    int n;
    cin>>n;
    for(;n;n--){
        string s;
        cin>>s;
        m[s]++;
    }
    int maxint=0;string ans;
    for(auto&i:m){
        if(i.second>maxint)maxint=i.second,ans=i.first;
    }
    cout<<ans<<endl;
    return 0;
}
