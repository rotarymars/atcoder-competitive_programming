#include <iostream>
#include <numeric>
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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int&i:v)cin>>i;
    int ans=0;
    for(auto i=v.begin();i!=v.end();i++)ans+=*i*(accumulate(next(i,1),v.end(),0));
    cout<<ans<<endl;
    return 0;
}
