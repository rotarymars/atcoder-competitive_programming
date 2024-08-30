#include <iostream>
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
    string s;
    cin>>n>>s;
    vector<pair<int,int>>v{make_pair(1,0),make_pair(0,-1),make_pair(-1,0),make_pair(0,1)};
    int ind=0;
    pair<int,int>ans=make_pair(0,0);
    for(int i=0;i<n;i++){
        if(s[i]=='S')ans=make_pair(ans.first+v[ind].first,ans.second+v[ind].second);
        else ind++,ind%=4;
    }
    cout<<ans.first<<' '<<ans.second<<endl;
    return 0;
}
