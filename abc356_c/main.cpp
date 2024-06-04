#include <iostream>
#include <vector>
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
    int n,m,k;
    cin>>n>>m>>k;
    vector<pair<vector<int>,char>>v(m);
    for(int i=0;i<m;i++){
        int c;
        cin>>c;
        v[i].first.resize(c);
        for(int&i:v[i].first)cin>>i;
        for(int&i:v[i].first)i--;
        cin>>v[i].second;
    }
    int pat=(1<<(n));
    int ans=0;
    DP(pat);
    for(int i=0;i<pat;i++){
        bool ok=true;
        DP(i);
        for(int j=0;j<m;j++){
            int cnt=0;
            for(int&k:v[j].first)if(i&(1<<k))cnt++;
            if(cnt<k&&v[j].second!='x')ok=false;
            if(cnt>=k&&v[j].second!='o')ok=false;
        }
        DP(ok);
        ans+=ok;
    }
    cout<<ans<<endl;
    return 0;
}
