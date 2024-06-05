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
    int xa,xb,xc,ya,yb,yc,xd,yd;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;
    if(xa==xb)xd=xc;
    if(xa==xc)xd=xb;
    if(xb==xc)xd=xa;
    if(ya==yb)yd=yc;
    if(ya==yc)yd=yb;
    if(yb==yc)yd=ya;
    cout<<xd<<' '<<yd<<endl;
    return 0;
}
