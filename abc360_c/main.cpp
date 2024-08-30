#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
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
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)cin>>v[i].first;
    for(int i=0;i<n;i++)cin>>v[i].second;
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=1;i<n;i++){
        if(v[i].first==v[i-1].first)ans+=v[i-1].second;
    }
    cout<<ans<<endl;
    return 0;
}
