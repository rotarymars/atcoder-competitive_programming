#include <iostream>
#include <algorithm>
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
    vector<int>v(4);
    cin>>v[0]>>v[1]>>v[2]>>v[3];
    sort(v.begin(),v.end());
    if(v==vector({1,4,7,9}))cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
