#include <numeric>
#include <vector>
#include <iostream>
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
    int h,n;
    cin>>h>>n;
    vector<int>v(n);
    for(int&i:v)cin>>i;
    if(accumulate(v.begin(),v.end(),0ll)>=h)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
