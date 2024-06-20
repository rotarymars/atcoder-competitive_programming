#include <iostream>
#include <vector>
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
    vector<int>v(3);
    cin>>v[0]>>v[1]>>v[2];
    sort(v.begin(),v.end());
    if(v[2]-v[1]==v[1]-v[0])cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
