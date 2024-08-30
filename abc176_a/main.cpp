#include <iostream>
#include <template/rud.hpp>
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
    int n,x,t;
    cin>>n>>x>>t;
    cout<<RUD(n,x)*t<<endl;
    return 0;
}
