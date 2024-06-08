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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int&i:v)cin>>i;
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    for(;q;q--){
        int x;
        cin>>x;
        cout<<distance(v.begin(),lower_bound(v.begin(),v.end(),x))<<endl;
    }
    return 0;
}
