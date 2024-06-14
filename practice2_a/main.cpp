#include <iostream>
#include <template/dsu.hpp>
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
    int n,q;
    cin>>n>>q;
    DSU d(n);
    for(;q;q--){
        int t,u,v;
        cin>>t>>u>>v;
        if(!t)d.merge(u,v);
        else cout<<d.same(u,v)<<"\n";
    }
    return 0;
}
