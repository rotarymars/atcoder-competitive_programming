#include <iostream>
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
    int n,m;
    cin>>n>>m;
    map<int,int>nm,mm;
    for(;n;n--){
        int tmp;
        cin>>tmp;
        nm[tmp]++;
    }
    for(;m;m--){
        int tmp;
        cin>>tmp;
        mm[tmp]++;
    }
    for(pair<const int,int>&i:mm){
        if(nm[i.first]>=i.second)continue;
        cout<<"No\n";
        return 0;
    }
    cout<<"Yes\n";
    return 0;
}
