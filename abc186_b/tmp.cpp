#include <iostream>
#include <limits.h>
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
    int h,w;
    cin>>h>>w;
    vector<vector<int>>v(h,vector<int>(w));
    for(vector<int>&i:v)for(int&j:i)cin>>j;
    int mini=INT_MAX;
    for(vector<int>&i:v)for(int&j:i)mini=min(mini,j);
    int ans=0;
    for(vector<int>&i:v)for(int&j:i)ans+=j-mini;
    cout<<ans<<endl;
    return 0;
}
