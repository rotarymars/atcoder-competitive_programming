#include <iostream>
#include <vector>
#include <iterator>
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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int&i:v)cin>>i;
    long long ans=0;
    for(int i=0;i<n;i++){
        auto it=lower_bound(v.begin(),v.end(),v[i]+k);
        if(*it!=v[i]+k)it--;
        ans+=distance(next(v.begin(),i),it);
    }
    cout<<ans<<endl;
    return 0;
}
