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
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int&i:a)cin>>i;
    cout<<distance(a.begin(),lower_bound(a.begin(),a.end(),x))+1<<endl;
    return 0;
}
