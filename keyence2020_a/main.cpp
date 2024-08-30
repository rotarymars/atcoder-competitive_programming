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
    int h,w,n;
    cin>>h>>w>>n;
    cout<<RUD(n,max(h,w))<<endl;
    return 0;
}
