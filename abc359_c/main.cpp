#include <iostream>
#include <numeric>
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
    long long sx,sy,tx,ty;
    cin>>sx>>sy>>tx>>ty;
    if(sx>tx)swap(sx,tx),swap(sy,ty);
    long long dx=tx-sx,dy=abs(sy-ty);
    DP(dx);
    if(sy%2==0){
        if((sx)%2==0)dx--;
    }
    else if((sx)%2==1)dx--;
    dx=max(dx-dy,0ll);
    DP(dx);
    cout<<dy+(dx/2ll)+(dx%2ll)<<endl;
    return 0;
}
